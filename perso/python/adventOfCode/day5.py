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

def addMiddleValue(update):
    global result
    middleIndex = float(len(update))/2
    
    if middleIndex % 2 != 0:
        middleIndex = int(middleIndex - .5)
    else:
        middleIndex = int(middleIndex - 1)
        
    result +=  int(update[middleIndex])


# Input file reading and data extraction
with open("rsc/day5.txt", 'r') as inputFile:
    parts = inputFile.read().split("\n\n")
    rulesList = sorted(parts[0].split('\n'))
    updates = list(filter(None, parts[1].split('\n')))

    computeOrderMap(rulesList)

# print(orderMap)
# print("")

for update in updates:
    update = update.split(',')
    revertedUpdate = list(reversed(update))
    invalidIndexes = []

    for index in range(len(revertedUpdate)):
        # Check if an element of the reverted list is not places after another element it shouldn't
        if revertedUpdate[index] in orderMap and len([i for i in revertedUpdate[index+1:] if i in orderMap[revertedUpdate[index]]]) > 0:
            if isValidUpdate:
                isValidUpdate = False

            invalidIndexes.append((len(update) - 1 ) - index) # Invert indexes from reverted update
            

    # if isValidUpdate:
    #     addMiddleValue(update)    

    ## Problem 2
    if not isValidUpdate:
        invalidIndexes = sorted(invalidIndexes)
        
        # print("Invalid update : " + str(update) + " - Invalid indexes : " + str(invalidIndexes))
        # print("Before : " + str(update))

        # Swaping wrongly placed page numbers
        for invalidIndex in invalidIndexes:
            if invalidIndex == 1:
                update[0], update[invalidIndex] = update[invalidIndex], update[0]
                continue

            if update[invalidIndex] in orderMap:
                # Get wich pageNum is wrongly placed before the considered invalid page number
                # print("Update until invalidIndex (" + str(invalidIndex) + ") : " + str(update[:invalidIndex]) + '\n')
                for pageNumToSwap in update[:invalidIndex]:
                    if pageNumToSwap in orderMap[update[invalidIndex]]:
                        toSwapIndex = update.index(pageNumToSwap)
                        update[toSwapIndex], update[invalidIndex] = update[invalidIndex], update[toSwapIndex]
                        

        # print("After : " + str(update) + '\n')
        addMiddleValue(update)
    
    isValidUpdate = True

print(result)
