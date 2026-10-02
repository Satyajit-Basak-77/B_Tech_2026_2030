s = 'hel123O4every093'
sum =0 
avg=0
count=0
for i in s:
    if i.isdigit():
        sum+=int(i)
        count+=1

avg=sum/count
print(sum, count, avg)