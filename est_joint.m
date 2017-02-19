function [r1, r2, trans, mdl] = est_joint(body1, body2, varargin)
% ESTIMATE_JOINT Calculates the common point between two moving frames
%     [r1, r2, trans3] = ESTIMATE_JOINT(trans1, quat1, trans2, quat2)
%     ri is the local vector from body i to common point
%     trans3 is the common point in the inertial frame
% 
%     % Example:
%     filePath = '\sample\stance\all.csv';
% 
%     bodiesName = {'Rigid Body 1', 'Rigid Body 2', 'Rigid Body 3'};
%     markersName = {'Marker_14379', 'Marker_14380'};
% 
%     [bodies, markers, time] = Mocap.read_mocap(filePath, bodiesName, markersName);
% 
%     idx = sqrt(sum(bodies(2).trans.^2, 2)) < 0.3;
%     [r1, r2, ~] = Mocap.estimate_joint( bodies(2).trans(idx,:), ...
%         bodies(2).quat(idx,:), bodies(3).trans(idx,:), bodies(3).quat(idx,:) );
% 
%     trans = (bodies(2).trans + quatrotate(quatinv(bodies(2).quat), r1.') + ...
%              bodies(3).trans + quatrotate(quatinv(bodies(3).quat), r2.')) / 2;
% 
%     markerA = Mocap.marker;
%     markerA.trans = trans;
%     markerA.name = 'Ankle Center';
% 
%     Mocap.show_mocap(bodies, [markers markerA], time, [-1 1 -1 1 -1 1])

    N = size( [body1.trans body2.trans], 1 );
    if N < 6
        error( 'Not enough points for ankle calculation' )
    end

    if nargin == 2
        weights = ones(3*N,1);
    elseif nargin == 3
        weights = reshape(repmat(varargin{1}, [1 3]).', [3*N 1]);
    else
        error('Too many input')
    end

    A = [ reshape( quat2dcm(body1.quat), [3 3*N] )', -reshape( quat2dcm(body2.quat), [3 3*N] )' ];
    Y = -( reshape( body1.trans', [3*N 1] ) - reshape( body2.trans', [3*N 1] ) );

    mdl = fitlm(A, Y, 'Intercept', false, 'Weights', weights);
%     disp(['R^2 = ' num2str(mdl.Rsquared.Adjusted)])
    if mdl.Rsquared.Adjusted < 0.98
        mdl = fitlm(A, Y, 'Intercept', false, 'Weights', weights, 'Robust', 'on');
        warning(['Joint badly estimated. Using robust mode. R = ' num2str(mdl.Rsquared.Adjusted)]);
    end

    r1 = mdl.Coefficients.Estimate(1:3); % common point from frame 1
    r2 = mdl.Coefficients.Estimate(4:6); % common point from frame 2

    trans = (body1.trans + quatrotate(quatinv(body1.quat), r1.') + ...
            body2.trans + quatrotate(quatinv(body2.quat), r2.'))/2;
end