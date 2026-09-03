cp = float(input("Enter cp: "))
sp = float(input("Enter sp: "))

if(sp>cp):
    print("Profit ", sp - cp)
elif(sp==cp):
    print("No Profit No Loss ")
else:
    print("Loss ", cp-sp)