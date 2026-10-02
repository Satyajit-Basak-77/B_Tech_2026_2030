print("Enter marks out of 100")
sub1 = float(input("Enter subject 1 marks: "))
sub2 = float(input("Enter subject 2 marks: "))
sub3 = float(input("Enter subject 3 marks: "))
sub4 = float(input("Enter subject 4 marks: "))
sub5 = float(input("Enter subject 5 marks: "))

total = ((sub1+sub2+sub3+sub4+sub5)/500)*100

if(sub1>100 or sub2>100 or sub3>100 or sub4>100 or sub5>100):
    print("Error.")
elif(sub1<40 or sub2<40 or sub3<40 or sub4<40 or sub5<40):
    print("You are failed")
elif(total>=75):
    att =float(input("Enter attendence percentage: "))
    if(att>=85):
        print(f"marks is = {total} attendence = {att}")
        print("Eligible for Scholarship.")
else:
    att =float(input("Enter attendence percentage: "))
    print(f"marks is = {total} attendence = {att}")
    print("Not Eligible.")