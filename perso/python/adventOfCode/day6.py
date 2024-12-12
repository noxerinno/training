from itertools import combinations

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

    if direction == "UP" and maze[x-1][y] == '#':
        direction = "RIGHT"
        isNextStepAChangeOfDirection = True
        return

    if direction == "RIGHT" and maze[x][y+1] == '#':
        direction = "DOWN"
        isNextStepAChangeOfDirection = True
        return
    
    if direction == "DOWN" and maze[x+1][y] == '#':
        direction = "LEFT"
        isNextStepAChangeOfDirection = True
        return

    if direction == "LEFT" and maze[x][y-1] == '#':
        direction = "UP"
        isNextStepAChangeOfDirection = True
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
verticalPathChar = ['|', '+', '^']
horizontalPathChar = ['-', '+', '^']
validLoopCount = 0

def displayMaze(maze):
    for line in maze:
        print(line)
    print('\n')

def doesConnectToPath(line):
    connectToPath = False

    # If there is no turn, there is no loop
    if len(line) == 0 or '+' not in line:
        return connectToPath

    parts = line.split('+')
    for part in parts:
        if len(part) == 0:
            break

        # If it directly connect to path
        if part[0] in horizontalPathChar:
            connectToPath = True
            break

        # If there is an obstacle on the way, we break
        if '#' in part:
            break

    return connectToPath

def checkLoop(x, y):
    global validLoopCount

    tempMaze = maze

    # if direction == "UP" and y+1 < mazeWidth and maze[x][y+1] in horizontalPathChar and '+' in maze[x][y+1:]:
    if direction == "UP" and y+1 < mazeWidth:
        line = maze[x][y+1:]
        
        if doesConnectToPath(line):
            validLoopCount += 1
            tempMaze[x-1] = tempMaze[x-1][:y] + 'O' + tempMaze[x-1][y+1:] 
            displayMaze(tempMaze)

    # if direction == "RIGHT" and x+1 < mazeHeight and maze[x+1][y] in verticalPathChar:
    if direction == "RIGHT" and x+1 < mazeHeight:
        # Retreive line chars
        line = ""
        tempX = x 
        while(tempX < mazeHeight - 1):
            tempX += 1
            line += maze[tempX][y]

        # Check if there is a turn in the vertical line 
        if doesConnectToPath(line):
            validLoopCount += 1
            tempMaze[x] = tempMaze[x][:y+1] + 'O' + tempMaze[x][y+2:]
            displayMaze(tempMaze)

    # if direction == "DOWN" and y-1 >= 0 and maze[x][y-1] in horizontalPathChar and '+' in maze[x][:y-1]:
    if direction == "DOWN" and y-1 >= 0:
        line = maze[x][:y-1]

        if doesConnectToPath(line[::-1]):
            validLoopCount += 1
            tempMaze[x+1] = tempMaze[x+1][:y] + 'O' + tempMaze[x+1][y+1:] 
            displayMaze(tempMaze)

    # if direction == "LEFT" and x-1 >= 0 and maze[x-1][y] in verticalPathChar:
    if direction == "LEFT" and x-1 >= 0:
        # Retreive line chars 
        line = ""
        tempX = x
        while(tempX > 0):
            tempX -= 1
            line += maze[tempX][y]

        # Check if there is a turn in the vertical line 
        if doesConnectToPath(line[::-1]):
            validLoopCount += 1
            tempMaze[x] = tempMaze[x][:y-1] + 'O' + tempMaze[x][y:]
            displayMaze(tempMaze)


def displayPath(x, y):
    global isNextStepAChangeOfDirection

    # Don't touch the starting point
    if maze[x][y] == '^':
        return

    # Handle turns and closing loops
    if isNextStepAChangeOfDirection or maze[x][y] == '|' or maze[x][y] == '-':
        maze[x] = maze[x][:y] + '+' + maze[x][y+1:]
        isNextStepAChangeOfDirection = False
        return

    # Display standard vertical path
    if direction == "UP" or direction == "DOWN":
        maze[x] = maze[x][:y] + '|' + maze[x][y+1:]
        return

    # Display standard horizontal path
    if direction == "LEFT" or direction == "RIGHT":
        maze[x] = maze[x][:y] + '-' + maze[x][y+1:]
        return

# Setting up maze dimensions
mazeHeight = len(maze)
mazeWidth = len(maze[0])
count = 0

while(True):
    count += 1

    checkLoop(currentX, currentY)
 
    # While True loop base case
    if isNextStepOutOfMaze(currentX, currentY) or count > 100000:
        displayPath(currentX, currentY)
        break

    # Checcking if next step is obstructed, if so, changing direction
    isNextStepObstructed(currentX, currentY)

    displayPath(currentX, currentY)

    # print("Direction : " + direction + " - Coordonnées : (" + str(currentX) + ", " + str(currentY) + ")")
    takeStep()


# Display maze and count problem result
displayMaze(maze)

print(validLoopCount)    
