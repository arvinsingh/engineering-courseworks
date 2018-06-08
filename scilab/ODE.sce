funcprot(0)
function dt=f(y,t)
    dt=-exp(-t*x)*y^2
endfunction
y0=-1
t0=0
x=0.4
sol=ode(y0,t0,x,f)
disp(sol, "Answer=")
