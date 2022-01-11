numFriends = int(input())
PWDLst = []
PLst = []
totalSeconds = []
tempSeconds = []
ints = []

for i in range(0, numFriends):
    PWD = "0"
    PWD = input()
    PWDLst.append(PWD.split(" ")) 


print(PWDLst) 

if numFriends == 1:
    print(PWDLst[0][0])

else:
    for x in range(0, numFriends):
        PLst.append(PWDLst[x][0])

    for element in PLst:
        ints.append(int(element))
    minCvalue = min(ints)
    maxCvalue = max(ints)
    print(minCvalue)
    print(maxCvalue)
    print(ints)

    for c in range(int(minCvalue), int(maxCvalue)+1):
        for u in range(0, numFriends):
            if PWDLst[u][0] == c:
                tempSeconds.append(0)
            
            elif int(PWDLst[u][0]) < c and int(PWDLst[u][0]) + int(PWDLst[u][2]) >= c:
                tempSeconds.append(0)
            
            elif int(PWDLst[u][0]) > c and int(PWDLst[u][0]) - int(PWDLst[u][2]) <= c:
                tempSeconds.append(0)
            
            else:
                if int(PWDLst[u][0]) < c:
                    tempSeconds.append(((c - int(PWDLst[u][2])) - int(PWDLst[u][0]))*(int(PWDLst[u][1])))
                
                elif int(PWDLst[u][0]) > c:
                    tempSeconds.append((int(PWDLst[u][0]) + (int(PWDLst[u][2]) - c))*(int(PWDLst[u][1])))

            
            
        totalSeconds.append(sum(tempSeconds))
        tempSeconds = []

    print(totalSeconds)
    print(min(totalSeconds))
        


''' 
TEST SAMPLES
1
0 1000 0


2
10 4 3
20 4 2


3
6 8 3
1 4 1
14 5 2

'''