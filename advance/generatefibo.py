import time
def generateFib():
    n1=0
    n2=1
    while True:
        yield n1
        n1,n2=n2,n1+n2

seq =generateFib()


while True:
    print(next(seq))
    time.sleep(0.1)