s = 'madma' 
s1=''
s2=''
if len(s)%2==0:
    s1= s[0:len(s)//2:1]
    s2 = s[len(s)//2:len(s)+1:1]
else:
    s1= s[0:len(s)//2:1]
    s2 = s[(len(s)//2)+1:len(s)+1:1]
#print(s1, s2)
if(s1 == s2):
    print("Symmetric")
else:
    print("Not Symmetric")