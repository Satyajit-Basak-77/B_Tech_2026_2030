n = int(input("Enter: "))
fact=1
if(n>0):
    for i in range (1, n+1):
        fact*=i
    print(f"Factorial = {fact}")
elif(n==0):
    print(f"Factorial = {fact}")
else:
    print("Not defined")