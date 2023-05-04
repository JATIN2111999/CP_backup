

n =9
import sys
for i in range(2,n-1):
    print(i)
    l=[]
    temp = n
    while(temp):
        l.append(temp%i)
        temp=temp//i
    print(l)
    if(l != l[::-1]):
        print(False)
        # sys.exit()
print(True)        