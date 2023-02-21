from itertools import permutations

t =int(input())


def checkone(s):
    one=1
    for i in s:
        if(i=='1' and one ):
            one=0
        elif(i=='1' and not one):
            return False
    return True

for i in range(t):
    n,d= map(int,input().split())
    s=input()
    one=1
    c=0
    for j in range(0,n,d):
        if('0'*d == s[j:j+d]):
            c+=1
        elif(checkone(s[j:j+d]) and one):
            one=0
            c+=1
    print(c)

