ctc= int(input("Enter ctc: "))
hra = ctc*(10/100)
da = ctc*(5/100)
pf = ctc*(3/100)
tax = 0
if (ctc < 500001):
    salary = ctc - hra - da - pf - tax
    print(f"Your salary = {salary}")
elif (ctc>500000 and ctc<1000001):
    tax = ctc*(10/100)
    salary = ctc - hra - da - pf - tax
    print(f"Your salary = {salary}")
elif (ctc>1000000 and ctc<2000001):
    tax = ctc*(20/100)
    salary = ctc - hra - da - pf - tax
    print(f"Your salary = {salary}")
else: 
    tax = ctc*(30/100)
    salary = ctc - hra - da - pf - tax
    print(f"Your salary = {salary}")