menu = int(input("Enter menu: "))
if(menu == 1):
    cm = int(input("Enter cm: "))
    ft = cm/30.48
    print(ft)
elif(menu == 2):
    km = int(input("Enter km: "))
    mile = km/1.609
    print(mile)
elif(menu == 3):
    USD = int(input("Enter USD: "))
    INR = USD*96
    print(INR)
else:
    print("Exit.")