# grid = [['A', 'B', 'C'],
#         ['D', 'E', 'F'],
#         ['G', 'H', 'I']]
#
# print(grid[0][len(grid[0])-1])

# list1 = [1,3,5,7,9,11]
# list2 = [1,5,11]

# if set(list1) <=set(list1):
#     print("oui")
#
# print(len(set(list1).intersection(set(list2))))

# for index in range(len(list2)):
#     # print((list2[:index] + list2[index+1:]))
#     print(list2[index+1:])

# print(len(list2)/2)

# print(list1[:3])

# temp = 3
# temp -= 1
# print(temp)

# string = "Je ne sais aps quoi écrire"
# print(string.count('e'))

# testTuple = (1,[1])
# print(testTuple)
#
# testTuple = testTuple.append(3)
# print(testTuple)


# a_list = [][]
# N = 3
# a_list = [ [] for _ in range(N) ]
#
# for lis in a_list:
#     # for iter in range(a_list.index(lis)):
#     #     lis.append((iter, iter*iter))
#     print(a_list.index())    
#
# print(a_list)


# string = "Ceci est une chaine de charactère de test"
# pivot = 16
#
# print(string[pivot])
# print(string[pivot:])

# tab = ["..T..",
#        "..T..",
#        "..T..",
#        "..X..",
#        "..U..",
#        "..U.."]
#
# for x in range(len(tab)):
#     if 'X' in tab[x]:
#         y = tab[x].index('X')
#
#         before = []
#         after = []
#
#         tempX = x
#         while(tempX > 0):
#             tempX -= 1
#             before.append(tab[tempX][y])
#
#         tempX = x 
#         while(tempX < len(tab) - 1):
#             tempX += 1
#             after.append(tab[tempX][y])
#
#         print(before)
#         print(after)


# string = "........P------"
#
# print(string.split('T'))
# print(string[::-1])


tab = ['J', 'e', ' ', 'n', 'e', ' ', 's', 'a', 'i', 's', ' ', 'p', 'a', 's']

print(tab)

string = ""
for letter in tab:
    string += letter

print(string)
