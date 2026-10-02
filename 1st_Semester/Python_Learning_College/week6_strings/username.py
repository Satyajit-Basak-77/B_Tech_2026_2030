email = "paularijit075@gmail.com"
siz = len(email)
for i in range (0, siz):
    if email[i]=='@':
        f=i
        break
username = email[0:f:1]
print(username)