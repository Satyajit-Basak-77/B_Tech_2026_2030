#(x-1)/x + (1/2)((x-1)/x)^2 + (1/3)((x-1)/x)^3 + (1/4)((x-1)/x)^4 + ... 

x = int(input())
n = (x-1)/x
r = int(input('Enter range: '))
sum=0
for i in range (1, r+1):
    sum+=(1/i)*(n**i)
print(sum)