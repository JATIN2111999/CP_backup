t = int(input())

for i in range(t):
    n = int(input())
    m = {}
    number = list(map(int, input().split()))
    char = [*input()]
    notapp = 0
    for c, j in zip(char, number):
        if(m.get(j) == None):
            m[j] = c
        elif(m[j] !=c):
            notapp = 1
            break


    
    if(notapp == 1):
        print("NO")
    else:
        print("YES")
