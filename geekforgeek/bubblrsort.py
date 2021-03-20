l=[1, 5, 3, 2]

swap=1
while(swap):
    swap=0
    for i in range(len(l)-1):
        if l[i]>l[i+1]:
            # l[i],l[i+1]=l[i+1],l[i]
            t=l[i]
            l[i]=l[i+1]
            l[i+1]=t
            swap=1
print(l)
    
