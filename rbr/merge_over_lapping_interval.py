l=[(6,8),(2,5),(1,3),(13,20),(9,14),(100,120)]
l=sorted(l,key= lambda x:x[0])

nl=[]
i=0
while(i<=len(l)-1):
    if i == len(l)-1:
        nl.append(l[i])
        break
    elif l[i][1]>l[i+1][0]:
        nl.append((l[i][0],l[i+1][1]))
        i+=2
    else:
        nl.append(l[i])
        i+=1

print(l)
print(nl)