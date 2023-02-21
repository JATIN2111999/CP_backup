t =int(input())

for _ in range(t):
    a,b,p,q =map(int,input().split())
    if(p%a==0 and q%b ==0):
        if(abs(p/a - q/b) <=1):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")