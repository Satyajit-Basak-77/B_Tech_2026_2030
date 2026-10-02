print("Press 1 for addition.")
print("Press 2 for subtraction.")
print("Press 3 for division.")
print("Press 4 for multiplication.")
print("Enter anything else to exit.")
menu = int(input("Enter your choice = "))
if(menu==1):
    a = int(input("Enter 1st number: "))
    b = int(input("Enter 2nd number: "))
    add = a+b
    print(f"Addition is = {add}")
elif(menu==2):
    a = int(input("Enter 1st number: "))
    b = int(input("Enter 2nd number: "))
    sub = a-b
    print(f"Subtraction is = {sub}")
elif(menu==3):
    a = int(input("Enter 1st number: "))
    b = int(input("Enter 2nd number: "))
    if(b==0):
        print("Not defined")
    else:
        div = a/b
        print(f"Division is = {div}")
elif(menu==4): 
    a = int(input("Enter 1st number: "))
    b = int(input("Enter 2nd number: "))
    mul = a*b
    print(f"Multiplication is = {mul}")
else:
    print("Thank you. Exit.")