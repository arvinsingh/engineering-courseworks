XB = [ 80, 90, 99, 108, 116, 125, 133, 141, 151, 160, 169, 179, 180 ]
YB = [ 0, -2, -5, -9, -15, -18, -23, -29, -28, -25, -21 -20, -17 ]
YF = 50
XF = 0
VF = 20
for time = 1:13
   dist = sqrt((YB(time) - YF(time))**2 + (XB(time) - XF(time))**2)
   XF(time + 1) = XF(time) + VF *(XB(time) - XF(time))/dist
   YF(time + 1) = YF(time) + VF *(YB(time) - YF(time))/dist
   if dist < = 10 then
       disp(" minutes", time, "Caught in ")
       disp("Kilometers", dist, "At ")
       break
   else 
       if time > 12 then
           disp("Target Escaped")
       else
           continue
       end
   end

end
