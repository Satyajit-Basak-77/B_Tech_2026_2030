n = int(input())
bina = []
while n>0:
    bina.append(n%2)
    n//=2
for i in bina[::-1]:
    print(i, end='')