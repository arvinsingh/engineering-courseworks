deff('g=f(x,y)','g=(y**2-x**2)/(y**2+x**2)')
xo=input("Enter xo: ")
yo=input("Enter yo: ")
h=input("Enter h: ")
xn=input("Enter xn: ")
n=(xn-xo)/h
for i=1:n
    k1=h*f(xo,yo)
    k2=h*f(xo+(h/2),yo+(k1/2))
    k3=h*f(xo+(h/2),yo+(k2/2))
    k4=h*f(xo+h,yo+k3)
    y1=yo+(1/6)*(k1+2*k2+2*k3+k4)
    xo=xo+h
    disp([xo y1])
    yo=y1
end
