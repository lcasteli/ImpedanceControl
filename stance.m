% Finding heel strike
dy = diff(ankle.trans(:,1));    dy = [dy;dy(end)];
yy = bsxfun(@times,ankle.trans,(abs(dy)<5e-4));
stancelen = round(0.1*length(yy):0.7*length(yy)); %(assuming stance happens within 10% and 70% of step)
dymean = sum(yy(stancelen,:))./sum(yy(stancelen,:)~=0);
idxstance = find(yy(stancelen,1)~=0);
idxhlstrk = stancelen(1)+ idxstance(1);
pos = dymean + [-6.54e-2*0 -0.1517-66.30203939e-3 0];

sta_start = idxhlstrk;
sta_end = idxhlstrk + length(idxstance);
fs = 350;
N = length(ankle.trans);
t_st = (0:1/fs:(N-1)/fs).';

seg = 0.75 + (10:20:90);
for ii = 1:length(seg)
    t_sta(ii) = t_st(sta_start)+ 0.01*seg(ii)*(t_st(sta_end)-t_st(sta_start));
end