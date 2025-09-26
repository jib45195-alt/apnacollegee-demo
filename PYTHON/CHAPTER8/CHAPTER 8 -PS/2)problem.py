def f_to_c(f):
    return 5*(f-32)/9 
f = int(input("enter temperature in f :"))
c = f_to_c(f)
print(f"{round(c , 2)} degree c ") # round use kiya isliye ki vo only 2 decimal place tk aye

