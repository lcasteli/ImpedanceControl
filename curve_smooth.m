function [output]=curve_smooth(input)
output = zeros(size(input));
for jj=1:size(input,3)
    for ii=1:size(input,2)
        output(:,ii,jj)=smooth(input(:,ii,jj));
    end
end
end