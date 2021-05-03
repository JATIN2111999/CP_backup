strl=input()
c=0
gotit=0
for i in range(len(strl)-1):
    if(strl[i]==strl[i+1]):
        c+=1
    else:
        c=0
    if(c==6):
        gotit=1
        break
if gotit:
    print("YES")
else:
    print("NO")
print(len("1000000001"))