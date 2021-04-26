def generateOdd():
    i=1
    while True:
        yield i
        i+=2



seq= generateOdd()
print(next(seq))
print(next(seq))
print(next(seq))
print(next(seq))
print(next(seq))
print(next(seq))