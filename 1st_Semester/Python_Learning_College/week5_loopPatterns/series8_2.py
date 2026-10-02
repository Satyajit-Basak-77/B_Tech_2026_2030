#1 2 3 4 / 1 2 4 3 / 1 3 2 4 / 1 3 4 2 / 1 4 2 3 / 1 4 3 2 / 2 1 3 4 / 2 1 4 3 / 2 3 1 4 / 2 3 4 1 / 2 4 1 3 / 2 4 3 1 / 3 1 2 4 / 3 1 4 2 / 3 2 1 4 / 3 2 4 1 / 3 4 1 2 / 3 4 2 1 / 4 1 2 3 / 4 1 3 2 / 4 2 1 3 / 4 2 3 1 / 4 3 1 2 / 4 3 2 1
#This is for only combination repetation of digits i NOT acceptable
for i in range (1, 5):
    for j in range (1, 5):
        for k in range (1, 5):
            for l in range (1, 5):
                if(i != j and i != k and i != l and j != k and j != l and k != l):
                    print(i,j,k,l, end = " / ")