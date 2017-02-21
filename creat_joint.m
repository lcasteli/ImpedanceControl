function [r1, r2, trans, mdl] = creat_joint(body1, body2, exclude)

        tic
        fprintf('Finding common joint...\n')
        if nargin == 2
            exclude = false(size(body1.trans(:,1)));
        end

        exclude3 = reshape(repmat(exclude, [1 3])', [], 1);

        % 

        A = [ reshape( quat2dcm(body1.quat), 3, [] )', -reshape( quat2dcm(body2.quat), 3, [] )' ];
        Y = -( reshape( body1.trans', [], 1 ) - reshape( body2.trans', [], 1 ) );
        x0 = A(~exclude3,:) \ Y(~exclude3);

%             sol = x0;
%             sol = fminsearch(@(x) AnkleExp.nlcost_joint(x, body1, body2, exclude), x0);
        sol = fminsearch(@(x) nlcost_joint2(x, A(~exclude3,:), Y(~exclude3)), x0);
        r1 = sol(1:3);
        r2 = sol(4:6);
        mdl = [];


        %{

        A = [ reshape( quat2dcm(body1.quat), 3, [] )', -reshape( quat2dcm(body2.quat), 3, [] )' ];
        Y = -( reshape( body1.trans', [], 1 ) - reshape( body2.trans', [], 1 ) );

        mdl = fitlm(A, Y, 'Intercept', false, 'Exclude', exclude3);
%             disp(['R^2 = ' num2str(mdl.Rsquared.Adjusted)])
        if mdl.Rsquared.Adjusted < 0.98
            mdl = fitlm(A, Y, 'Intercept', false, 'Exclude', exclude3, 'Robust', 'on');
%                 disp(['Joint badly estimated. Using robust mode. R = ' num2str(mdl.Rsquared.Adjusted)]);
        end

        fprintf('Accuracy of joint center calculation: %f mm\n', 1e3*sqrt(3*mdl.MSE)) 

        r1 = mdl.Coefficients.Estimate(1:3); % body to joint, on body
        r2 = mdl.Coefficients.Estimate(4:6); % body to joint, on body

        %}

        trans = (body1.trans + quatrotate(quatinv(body1.quat), r1') + ...
            body2.trans + quatrotate(quatinv(body2.quat), r2')) / 2; 

%         joint = struct('name', [body1.name ' + ' body2.name], 'trans', trans);
        fprintf('Joint estimation complete. (%f seconds)\n', toc)
        sol = [r1; r2];
end

function cost = nlcost_joint2(x, A, Y)
            
        res = A * x - Y;
        err = reshape(res, [], 3);
        err = sqrt(sum(err.^2, 2));
        inlier = err < prctile(err, 99);
        cost = nanmean(err(inlier));
end