num1 = int(input())
num2 = int(input())
hcf=0
for i in range (1, num1+1):
    if(num1%i==0 and num2%i==0):
        hcf = i
lcm = (num1*num2)/hcf
print(f"LCM = {lcm} and HCF = {hcf}")