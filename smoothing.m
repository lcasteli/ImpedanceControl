function [output] = smoothing(input,pp)
% pp is the length of unreplicated signal
if size(input,1)>pp
    sm = bsxfun(@times,(input(1,:)-input(end,:))/2,tand(linspace(-80,80,pp)/1)');
    for jj=1:size(input,2)
        sm(:,jj)=sm(:,jj)./(max(sm(:,jj))./abs((input(pp,jj)-input(pp+1,jj))/2));
    end
    output = input + repmat(sm,size(input,1)/pp,1);
else
    output = input;
end
end