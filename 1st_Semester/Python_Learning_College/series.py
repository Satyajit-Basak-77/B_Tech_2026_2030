n = int(input("Enter n: "))
sum=0
ver = 0
for i in range(1, n+1):
    sum = sum + i**2
    i+=1
print(sum)
ver = (n*(n+1)*((2*n)+1))/6
print(ver)