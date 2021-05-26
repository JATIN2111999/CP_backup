n,m=map(int,input().split())

l=list(map(int,input().split()))
sumall=l[0]-1

for i in range(1,m):
    if(l[i-1]==l[i]):
        continue
    if(l[i-1]<l[i]):
        sumall+=(l[i]-l[i-1])
        continue
    else:
        sumall+=(n-l[i-1]+l[i])
print(sumall)