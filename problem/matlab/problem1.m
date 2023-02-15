u = [1,3,1]'
v = [2,2,2]'
w = [3,2,3]'
CosTheta = max(min(dot(u,v)/(norm(u)*norm(v)),1),-1)
ThetaInDegrees = real(acosd(CosTheta))

CosTheta1 = max(min(dot(v,w)/(norm(v)*norm(w)),1),-1)
ThetaInDegrees1 = real(acosd(CosTheta1))

CosTheta2 = max(min(dot(u,w)/(norm(u)*norm(w)),1),-1)
ThetaInDegrees2 = real(acosd(CosTheta2))

areEssentiallyEqual = ismembertol(ThetaInDegrees,ThetaInDegrees1,ThetaInDegrees2)
% checking the condition 
   if (areEssentiallyEqual == 1)
      % if condition is true then print the following 
      fprintf('Two consecutive rotation is equivalent to one single rotation by angle' );
   else
      % if condition is false then print the following 
      fprintf('Two consecutive rotation is not equivalent to one single rotation by angle' );
   end
