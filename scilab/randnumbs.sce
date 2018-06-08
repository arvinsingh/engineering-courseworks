count = 0
for r =round(rand(1,1000,"uniform")*1000)
    if r > 150 then
        if r < 250 then
            count = count + 1
            disp([count     r])
        end
    end
    if count == 30 then
        break
    end
end
