x = int(input())
x1 = x
sum=0
print("-"*10)
for i in range(1, 6):
    sum+=x
    print(x)
    x=x*10+x1
print(sum)