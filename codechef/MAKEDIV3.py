t =int(input())

for _ in range(t):
    n =int(input())
    number=''
    for i in range(n):
        if(i==0 or i==n-1):
            number+='3'
        else:
            number+='0'
    print(number)