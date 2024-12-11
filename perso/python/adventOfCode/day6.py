## Problem 1
maze = []
mazeHeight = 0
mazeWidth = 0
currentX = 0
currentY = 0
direction = "UP"
isNextStepAChangeOfDirection = False
count = 0
result = 0

# Reading maze
with open("rsc/day6_test.txt", 'r') as inputFile:
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
    global isNextStepAChangeOfDirection

    if direction == "UP":
        if x-2 >= 0 and maze[x-2][y] == '#':
            isNextStepAChangeOfDirection = True
            return

        if maze[x-1][y] == '#':
            direction = "RIGHT"
            return

    if direction == "RIGHT":
        if y+2 < mazeWidth and maze[x][y+2] == '#':
            isNextStepAChangeOfDirection = True
            return

        if maze[x][y+1] == '#':
            direction = "DOWN"
            return
    
    if direction == "DOWN":
        if x+2 < mazeHeight and maze[x+2][y] == '#':
            isNextStepAChangeOfDirection = True
            return

        if maze[x+1][y] == '#':
            direction = "LEFT"
            return

    if direction == "LEFT":
        if y-2 >= 0 and maze[x][y-2] == '#':
            isNextStepAChangeOfDirection = True
            return
        
        if maze[x][y-1] == '#':
            direction = "UP"
            return
    
    return False

# Take a new step
def takeStep():
    global currentX
    global currentY

    if direction == "UP":
        currentX -= 1
        return

    if direction == "RIGHT":
        currentY += 1
        return

    if direction == "DOWN":
        currentX += 1
        return

    if direction == "LEFT":
        currentY -= 1
        return


## Problem 2
loopCounter = 0

def displayPath(x, y):
    global isNextStepAChangeOfDirection
    global loopCounter

    if maze[x][y] == '^':
        return

    if isNextStepAChangeOfDirection or maze[x][y] == '|' or maze[x][y] == '-':
        maze[x] = maze[x][:y] + '+' + maze[x][y+1:]
        isNextStepAChangeOfDirection = False
        return

    if maze[x][y] == '|' or maze[x][y] == '-':
        maze[x] = maze[x][:y] + '+' + maze[x][y+1:]
        loopCounter += 1
        return

    if direction == "UP" or direction == "DOWN":
        maze[x] = maze[x][:y] + '|' + maze[x][y+1:]
        return

    if direction == "LEFT" or direction == "RIGHT":
        maze[x] = maze[x][:y] + '-' + maze[x][y+1:]
        return

# Setting up maze dimensions
mazeHeight = len(maze)
mazeWidth = len(maze[0])
count = 0

while(True):
    count += 1

    displayPath(currentX, currentY)
     
    # While True loop base case
    if isNextStepOutOfMaze(currentX, currentY) or count > 100000:
        break

    # Checcking if next step is obstructed, if so, changing direction
    isNextStepObstructed(currentX, currentY)

    # print("Direction : " + direction + " - Coordonnées : (" + str(currentX) + ", " + str(currentY) + ")")
    takeStep()

for line in maze:
    print(line)
    # result += line.count('X')

print(loopCounter)
