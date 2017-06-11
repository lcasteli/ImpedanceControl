%% Add Path
mbspath = 'H:/Robotran/MBsysLab/mbs_matlab';

addpath([mbspath '/mbs_animation']);
addpath([mbspath '/mbs_desc']);
addpath([mbspath '/mbs_modules']);
addpath([mbspath '/mbs_utilities']);
%% 1. Initialization and Project Loading [mbs_load]
%--------------------------------------------------------------------------
close all; clear variables; clc;                                            % Cleaning of the Matlab workspace
global MBS_user;                                                            % Declaration of the global user structure
MBS_user.process = '';                                                      % Initialisation of the user field "process"

% Project loading
prjname = 'foot3';
[mbs_data, mbs_info] = mbs_load(prjname,'default');                         % Option 'default': automatic loading of "$project_name$.mbs" 
mbs_data_ini = mbs_data;                                                    % Backup of the initial multibody data structure
                                                                            % Have a look at the content of the mbs_data structure on www.robotran.be
%% Mass Matrix
global current_state
current_state = mbs_data;

% [M,c] = shinfoot_dirdyna(current_state,[],[]);






