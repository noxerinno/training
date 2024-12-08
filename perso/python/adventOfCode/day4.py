##Problem 1
grid = []
firstLetter = 'X'
secondLetter = 'M'
thirdLetter = 'A'
fourthLetter = 'S'
result = 0

# Read input
with open("rsc/day4.txt", 'r') as input_file:
    for line in input_file.read().split('\n'):
        if len(line) != 0:
            grid.append(line)


gridWidth = len(grid[0])
gridHeight = len(grid)


# Compute letter by letter, searching for Xs and looking in all direction 
def compute(x , y):
    global result

    # Looking "north"
    if x >= 3 and grid[x-1][y] == secondLetter and grid[x-2][y] == thirdLetter and grid[x-3][y] == fourthLetter:
        result += 1

    # Looking "north-east"
    if x >= 3 and y <= gridWidth-4 and grid[x-1][y+1] == secondLetter and grid[x-2][y+2] == thirdLetter and grid[x-3][y+3] == fourthLetter:
        result += 1

    # Looking "east"
    if y <= gridWidth-4 and grid[x][y+1] == secondLetter and grid[x][y+2] == thirdLetter and grid[x][y+3] == fourthLetter:
        result += 1

    # Looking "south-east"
    if x <= gridHeight-4 and y <= gridWidth-4 and grid[x+1][y+1] == secondLetter and grid[x+2][y+2] == thirdLetter and grid[x+3][y+3] == fourthLetter:
        result += 1

    # Looking "south"
    if x <= gridHeight-4 and grid[x+1][y] == secondLetter and grid[x+2][y] == thirdLetter and grid[x+3][y] == fourthLetter:
        result += 1

    # Looking "south-west"
    if x <= gridHeight-4 and y >= 3 and grid[x+1][y-1] == secondLetter and grid[x+2][y-2] == thirdLetter and grid[x+3][y-3] == fourthLetter:
        result += 1

    # Looking "west"
    if y >= 3 and grid[x][y-1] == secondLetter and grid[x][y-2] == thirdLetter and grid[x][y-3] == fourthLetter:
        result += 1

    # Looking "north-west"
    if x >= 3 and y >= 3 and grid[x-1][y-1] == secondLetter and grid[x-2][y-2] == thirdLetter and grid[x-3][y-3] == fourthLetter:
        result += 1


##Problem 2
result2 = 0
validWords = ["MAS", "SAM"]

def computeSecondProblem(x, y):
    global result2

    # Looking "north-west" to "south east"
    if x > 0 and x < gridHeight-1 and y > 0 and y < gridWidth-1:
        diagWord1 = grid[x-1][y-1] + 'A' + grid[x+1][y+1]
        diagWord2 = grid[x+1][y-1] + 'A' + grid[x-1][y+1]

        if diagWord1 in validWords and diagWord2 in validWords:
            result2 += 1

for x in range(gridHeight):
    for y in range(gridWidth):
        if grid[x][y] == firstLetter:
            compute(x, y)
            
        if grid[x][y] == thirdLetter:
            computeSecondProblem(x, y)


# print("Width : " + str(gridWidth) + "\nHeight : " + str(gridHeight))
# print(grid[1][1])
# print(grid[1][2])

print("Result problem 1 : " + str(result))
print("Result problem 2 : " + str(result2))
