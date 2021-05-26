t=int(input())
last=[]
for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    l=sorted(l)
    dfl=[]
    for i in range(1,n):
        dfl.append(abs(l[i]-l[i-1]))
    
    maxval=max(dfl)
    c=0
    for ele in l:
        if maxval<ele:
            c+=1
    last.append(c)

print(last)
