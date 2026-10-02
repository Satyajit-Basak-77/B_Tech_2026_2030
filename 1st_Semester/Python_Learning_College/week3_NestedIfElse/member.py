amt = int(input("Enter amount: "))
tp = amt
if(amt<=999):
    print("No discount")
elif(amt>=1000 and amt<=4999):
    p = int(input("Enter 1 if you are premium member else press anything: "))
    if(p==1):
        tp = tp - tp*(10/100)
    else:
        tp = tp - tp*(5/100)
else:
    p = int(input("Enter 1 if you are premium member else press anything: "))
    if(p==1):
        tp = tp - tp*(20/100)
    else:
        tp = tp - tp*(10/100)

if(tp>=10000):
    print(f"Original amount is = {amt} \nFinal amount is = {tp} and you got free delivery")
else:
    print(f"Original amount is = {amt}\nFinal amount is = {tp} with delivery charges = {tp+100}")