a = int(input("Enter :"))
if(a>0):
    if(a%2==0):
        if(a%4==0):
            print("This +ve no. is even and divisible by 4")
        else:
            print("This +ve no. is even and NOT divisible by 4")
    else:
        if(a%3==0):
            print("This +ve no. is odd and divisible by 3")
        else:
            print("This +ve no. is odd and NOT divisible by 3")
elif(a==0):
    print("Zero")
else:
    print("-ve number")