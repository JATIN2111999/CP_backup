
y='globl'
def foo():
    y = "local"
    print(y)
foo()
print(y)

def outer():
    x = "local"

    def inner():
        nonlocal x
        x = "nonlocal"
        print("inner:", x)

    inner()
    print("outer:", x)


outer()
