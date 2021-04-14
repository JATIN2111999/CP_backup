n=10

for i in range(n):
    for j in range(2*n):
        if(i+j<=n-1):
            print("*",end="")
        else:
            print(" ",end="")
        if((i+n)<=j):
            print("*",end="")
        else:
            print(" ",end="")
    print()
for i in range(n):
    for j in range(2*n):
        if(i>=j):
            print("*",end="")
        else:
            print(" ",end="")
        if(i>=(2*n -1)-j):
            print("*",end="")
        else:
            print(" ",end="")
    print()
