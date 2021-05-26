num=int(input())

def check(num):
    num=str(num)
    return len(num) == (num.count("7") +num.count("4"))

if(num%4==0 or num%7 ==0 or num%47==0 or num%74==0 or check(num)):
    print("YES")
else:
    print("NO")