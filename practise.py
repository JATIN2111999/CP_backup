
put = "jatin"
rev = ''

l = []
for i in put:
    l.append(i)
print(l)

while(len(l) > 0):
    rev += l.pop()
print(rev)
