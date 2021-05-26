fstr="hello"
sstr=input()
i=0
j=0
while(j<len(sstr) and i<len(fstr)):
    if(fstr[i]==sstr[j]):
        i+=1
        j+=1
    else:
        j+=1
if i==len(fstr):
    print("YES")
else:
    print("NO")

    