//Policy for Inventory Control
function bestpolicy(p, q)
C = 0.0//Cost
S = 115//Stock
I = 1//Day
UD = 0//Units Due
DD = 0//Due Date
for I = 1:180//Loop for 6 months or 180 days
    if DD == I then//Is today due date?
        S = S + q//Add q to stock
        UD = 0//units due = 0
    end
    dem = int(abs(grand(1,1,"unf",0,99)))//Generate random demand for today
    if dem <= S then//Is demand <= stock?
        S = S - dem//Compute new cost
        C = C + S * 0.75//Add carrying cost
    else
        C = C + (dem - S) * 18.0//Add shortage cost to total cost
        S = 0//Reset stock to zero
    end
    ES = S + UD
    if ES <= p then//is stock + units due <= reorder point?
        UD = q
        DD = I + 3//due date = today + 3
        C = C + 75.0//add reorder cost
    end
end
disp([p, q, C])//Display reorder point - reorder quantity - Total Cost
endfunction
bestpolicy(125,150) 
bestpolicy(125,250)
bestpolicy(150,250)
bestpolicy(175,250)
bestpolicy(175,300)
