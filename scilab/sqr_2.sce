a_count = 0
for i = 0:1000
        x = grand(1,1,"unf",0,2)
    f = x * x
    if sign(2 - f) == 1 then
        a_count = a_count + 1
    end
end
z = (a_count / 1000.0) * 2
disp(z)
