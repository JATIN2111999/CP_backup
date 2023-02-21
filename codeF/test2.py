t = int(input())

for j in range(t):
    a,b = map(int,input().split())
    
    alist= list(map(int,input().split()))
    totaleven=0
    totalodd=0
    totalsum= sum(alist)
    for e in alist:
        if(e%2 == 0):
            totaleven+=1
        else:
            totalodd+=1
    

    for i in range(b):
        ain,bin = map(int,input().split())
        if(ain == 0):
            if(bin%2 ==0):
                print(totalsum + totaleven*bin)
                totalsum += totaleven*bin
            else:
                print(totalsum + totaleven*bin)
                totalsum += totaleven*bin  
                totalodd = totaleven+totalodd
                totaleven =0
        else:
            if(bin%2 ==0):
                print(totalsum + totalodd*bin)
                totalsum += totalodd*bin
            else:
                print(totalsum + totalodd*bin)
                totalsum += totalodd*bin  
                totaleven = totalodd+totaleven
                totalodd =0




