from xmlrpc.client import MAXINT, MININT


t =int(input())

for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    min1=MAXINT
    min2=min1
    for i in range(n):
        if(l[i]<min1):
            min2=min1
            min1=l[i]
        else:
            if(l[i]<min2):
                min2=l[i]
    print(min1+min2)