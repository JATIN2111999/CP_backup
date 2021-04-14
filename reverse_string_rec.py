s="jatin"

def rec(x):
    if x=="":
        return 0
    else:
        rec(x[1:])
    print(x[0],end="")

rec(s)
print('\n')
