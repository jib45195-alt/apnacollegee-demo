marks = int(input("enter your marks : "))

if(marks<= 100 and marks>=90):
    grade = "ex"
    
elif(marks<90 and marks>=0):
    grade = "a"
    
elif(marks<80 and marks>=0):
    grade = "b"    
    
    
elif(marks<70 and marks>=0):
    grade = "c"
    
elif(marks< 60 and marks>=0):
    grade = "d"
    
elif(marks<50 ):
    grade = "f"
    
print("y0ur grade is:", grade)    