## Problem 1
orderMap = {}
updates = []
isValidUpdate = True
result = 0

def computeOrderMap(rulesList):
    global orderMap

    for rule in rulesList:
        firstPageNum = rule.split('|')[0]
        secondPageNum = rule.split('|')[1]

        if firstPageNum in orderMap:
            orderMap[firstPageNum].append(secondPageNum)
            continue
        
        orderMap[firstPageNum] = [secondPageNum]

# Input file reading and data extraction
with open("rsc/day5.txt", 'r') as inputFile:
    parts = inputFile.read().split("\n\n")
    rulesList = sorted(parts[0].split('\n'))
    updates = list(filter(None, parts[1].split('\n')))

    computeOrderMap(rulesList)

for update in updates:
    update = update.split(',')
    revertedUpdate = list(reversed(update))

    for index in range(len(revertedUpdate)):
        # Check if an element of the reverted list is not places after another element it shouldn't
        if revertedUpdate[index] in orderMap and len([i for i in revertedUpdate[index+1:] if i in orderMap[revertedUpdate[index]]]) > 0:
            isValidUpdate = False
            break

    if isValidUpdate:
        middleIndex = float(len(update))/2

        if middleIndex % 2 != 0:
            middleIndex = int(middleIndex - .5)
        else:
            middleIndex = int(middleIndex - 1)
        
        result +=  int(update[middleIndex])

    isValidUpdate = True

print(result)
