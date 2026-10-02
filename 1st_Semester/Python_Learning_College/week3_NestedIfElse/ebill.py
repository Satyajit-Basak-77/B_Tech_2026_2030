unit = int(input("Enter units: "))
if(unit<=100):
    p = unit*5
elif(unit>=101 and unit<=200):
    p = 500+(unit-100)*7
elif(unit>=201 and unit<=300):
    p =  1200+(unit-200)*10
elif(unit>=301):
    p = 2200+(unit-300)*15
tp = p
if(p>3000):
    tp = tp + tp*(5/100)
age = int(input("Enter age = "))
if(age>=60):
    tp = tp - tp*(10/100)

print(f"Total amount is = {tp}")