p = 10000
y = 2026
rate = 10/100
print(f"curr y {y} is approx {p}")
for i in range (1, 11):
    p = p + p*rate
    y+=1
    print(f"curr y {y} is {int(p+1)}")