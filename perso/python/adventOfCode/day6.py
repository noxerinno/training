## Problem 1
maze = []
mazeHeight = 0
mazeWidth = 0
currentX = 0
currentY = 0
direction = "UP"
count = 0
result = 0

# Reading maze
with open("rsc/day6.txt", 'r') as inputFile:
    for line in inputFile.read().split('\n'):
        if len(line) > 0:
            if '^' in line:
                currentX = count
                currentY = line.index('^')

            maze.append(line)
            count += 1

# Checking if next step is out of the maze 
def isNextStepOutOfMaze(x, y):
    if direction == "UP" and x-1 < 0:
        return True

    if direction == "RIGHT" and y+1 >= mazeWidth:
        return True

    if direction == "DOWN" and x+1 >= mazeHeight:
        return True
    
    if direction == "LEFT" and y-1 < 0:
        return True

    return False

# Checking if next step is obstructed, if so, changing direction
def isNextStepObstructed(x, y):
    global direction

    if direction == "UP" and maze[x-1][y] == '#':
        direction = "RIGHT"
        return True

    if direction == "RIGHT" and maze[x][y+1] == '#':
        direction = "DOWN"
        return True
    
    if direction == "DOWN" and maze[x+1][y] == '#':
        direction = "LEFT"
        return True

    if direction == "LEFT" and maze[x][y-1] == '#':
        direction = "UP"
        return True

    return False

# Take a new step
def takeStep():
    global currentX
    global currentY

    if direction == "UP":
        currentX -= 1

    if direction == "RIGHT":
        currentY += 1

    if direction == "DOWN":
        currentX += 1

    if direction == "LEFT":
        currentY -= 1


# Setting up maze dimensions
mazeHeight = len(maze)
mazeWidth = len(maze[0])
count = 0

while(True):
    maze[currentX] = maze[currentX][:currentY] + 'X' + maze[currentX][currentY+1:]
    count += 1
     
    # While True loop base case
    if isNextStepOutOfMaze(currentX, currentY) or count > 100000:
        break

    # Checcking if next step is obstructed, if so, changing direction
    isNextStepObstructed(currentX, currentY)

    # print("Direction : " + direction + " - Coordonnées : (" + str(currentX) + ", " + str(currentY) + ")")
    takeStep()

for line in maze:
    print(line)
    result += line.count('X')

print(result)
