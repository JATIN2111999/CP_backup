k,n,w=map(int,input().split())
f=0
for i in range(1,w+1):
    f+=(i*k)
if (f-n>0):
    print(f-n)
else:
    print(0)