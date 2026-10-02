N = int(input("Enter range: "))
i=1
sum=0
# while(i<=N):
#     sum+=i
#     i+=1
# print(sum)
while(i<=N):
    if(i%5==0):
        i+=1
        continue
    else:
        if(sum<300):
            sum+=i
            i+=1
        else:
            break
print(sum-i)