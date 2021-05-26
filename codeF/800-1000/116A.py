n=int(input())
maxv=0
current=0
for i in range(n):
    a,b=map(int,input().split())
    current-=a
    current+=b
    if maxv<current:
        maxv=current
print(maxv)

