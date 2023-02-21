
nice=[1,2,3,4,3,2,3,4,25,24,25,24]

result = -1
maxval =-1

for val in nice:
    if val>maxval:
        maxval,result = val,maxval
    elif val <maxval and val>result:
        result = val
print(result)