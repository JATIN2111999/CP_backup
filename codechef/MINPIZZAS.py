from math import gcd


t =int(input())

for _ in range(t):
    n,k = map(int,input().split())
    print(n//gcd(n,k))