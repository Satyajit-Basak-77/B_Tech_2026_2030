n = int(input("Enter range: "))
fact=1
sum=0
for i in range (1, n+1):
    fact*=i
    sum = sum + i/fact
print(sum)