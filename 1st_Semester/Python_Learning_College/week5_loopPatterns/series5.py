# 1 + x^2/2 + x^3/3 + ... + x^n/n

x = int(input("Enter x: "))
n = int(input("Enter range: "))
sum = 0
for i in range (2, n+1):
    sum+= (x**i)/i
print(sum+1)