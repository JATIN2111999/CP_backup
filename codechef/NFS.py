import math


t =int(input())

for _ in range(t):
    u,v,a,s= map(int,input().split())
    ans = math.sqrt(u**2 -(2*a*s))
    if(ans<=v):
        print('yes')
    else:
        print('no')
    