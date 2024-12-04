# s = "azertyyqsdffwxcvbnmpp"
# s = "azerty"
# s = "aaaaaa"
# s = "dvdf"
# s = "asjrgapa"
# knownChar = []
# maxLenght = 0

# s = s + s[::-1]

# for i in s:
#     print(i)
#     if i not in knownChar:
#         knownChar.append(i)
#     else:
#         if maxLenght < len(knownChar):
#             maxLenght = len(knownChar)
#         knownChar = [i]

# # return maxLenght
# if maxLenght < len(knownChar):
#     maxLenght = len(knownChar)

# print(maxLenght)


# ================= DIF ================

# s = "aaasjrgapa"
# s = "azerty"
# maxLenght = 0
# index = 1

# for i in s:
#     for j in s[index:]:
#         if j == i:
#             break

#     print(s[index:])
#     if len(s[index:]) > 0:
#         temp = (s[index:]).index(j) + 1 - index
#     else:
#         temp = len(s) - index

#     # temp = (s[index:]).index(j) - index + 2
#     if temp > maxLenght:
#         maxLenght = temp
#     index += 1

# print(maxLenght)

# print(s[3:])

# =================== DIF ================

# s = "aaasjrgaspa"
# s = "abcabcbb"
s = "pwwkew"
# knownChar = []
# maxLenght = 0
# index = 0

stringLength = len(s)
indexDict = {elem : [] for elem in s} 
for index, elem in enumerate(s): 
    indexDict[elem].append(index)

tupleList = []

for key in indexDict:
    # Si il n'y a qu'une occurence de la lettre 
    if len(indexDict[key]) == 1:
        tupleList.append((indexDict[key][0], stringLength - 1))
    # Si il y a plusieurs occurences de la lettre 
    else:
        for index in range(len(indexDict[key])):
            # Gestion du premier élément du tuple
            firstTupleElem = indexDict[key][index] + 1

            # Si c'est le dernier de la liste d'index on le prend comme il est (cc mcdo)
            if index == len(indexDict[key]) - 1:
                firstTupleElem -= 1

            # Gestion du deuxième élément du tuple 
            if len(indexDict[key]) - (index + 2) > 0:
                secondTupleElem = indexDict[key][index + 2] - 1
            else:
                secondTupleElem = stringLength - 1
            
            tupleList.append((firstTupleElem, secondTupleElem))

sortedTupleList = list(dict.fromkeys(tupleList))
sortedTupleList.sort()
sortedTupleIndex = 1

print("sortedTupleList : " + str(sortedTupleList))

for tupe in sortedTupleList:
    # isValidTuple = True
    for otherTuple in sortedTupleList[sortedTupleIndex:]:
        if tupe == otherTuple:
            continue
        
        if otherTuple[0] > tupe[1]:
            break
            
        # Si otherTuple inclu dans tupe ou tupe inclu dans otherTuple
        if tupe[0] <= otherTuple[0] and tupe[1] >= otherTuple[1]:
            # isValidTuple = False
            sortedTupleList.pop(sortedTupleList.index(tupe))
            break
        elif tupe[0] >= otherTuple[0] and tupe[1] <= otherTuple[1]:
            sortedTupleList.pop(sortedTupleList.index(otherTuple))

# print(validTupleList)
print(sortedTupleList)
print(max(list(map(lambda x: x[1]-x[0], sortedTupleList))) + 1)





# print(sorted(validTupleList, key=lambda x: x[1] - x[0], reverse=True)[0])

# for key in indexDict:
#     if len(indexDict[key]) == 1 and length - indexDict[key][0] > maxLenght:
#         maxLenght = length - indexDict[key][0]
#     else:
#         for index in indexDict[key]:
#             temp = 0 
#             if len(indexDict[key]) - (index + 2) >= 0:
#                 temp = indexDict[key][index + 2] - 1
#             else:
#                 temp = len(s)
            
#             if temp - (indexDict[key][index] + 1) > maxLenght:
#                 maxLenght = temp - (indexDict[key][index] + 1)





# print(type(indexDict['a'][87]))
# if len(indexDict['a']) - 5 >= 0:
#     print('cc')



# list = [0, 3, 5, 39, 84]
# print(list)
# list.pop(list.index(39))
# print(list)