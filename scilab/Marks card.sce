name=input("Your Name is:","string");
x0=input("ENTER MARKS FOR ENGLISH=");
x1=input("ENTER MARKS FOR HINDI=");
x2=input("ENTER MARKS FOR SCIENCE=");
x3=input("ENTER MARKS FOR MATHEMATICS=");
x4=input("ENTER MARKS FOR SOCIAL SCIENCE=");
totalmarks=x0+x1+x2+x3+x4
percentage=(totalmarks/500)*100
disp(["Student Name: " name])
disp(x0, "Marks in English: ")
disp(x1, "Marks in Hindi: ")
disp(x2, "Marks in Science: ")
disp(x3, "Marks in Mathematics: ")
disp(x4, "Marks in Social Science: ")
disp(totalmarks, "TOTAL MARKS OUT OF 500: ")
disp(percentage, "TOTAL PERCENTAGE: ")
percentage=(totalmarks/500)*100
if percentage>60 then
    disp("GRADE: Pass")
else
    disp("GRADE: Fail")    
end
