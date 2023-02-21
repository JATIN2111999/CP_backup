players = [1,1,1]
trainers = [10]

sortplayer = players.sort(reverse=True)
sorttrainer = trainers.sort(reverse=True)

i=0
j=0
mycount=0
while(i<len(players) and j<len(trainers)):
    if(players[i]<=trainers[j]):
        print(players[i],'<=',trainers[j])
        i+=1
        j+=1
        mycount+=1
    else:
        i+=1
print(mycount)




