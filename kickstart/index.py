te =int(input())
for t in range(te):
    n,k=map(int,input().split())
    ms= input()
    x=0
    for i in range(0,n//2):
        if(ms[i]!=ms[n-i-1]):
            x+=1
    print(abs(x-k))