result = 0

# def isFirstError():
#     global previousError
#
#     # If there is no previousError, return True. It is, indeed, the first error
#     if not previousError:
#         previousError = True
#         return previousError
#
#     return False

## Problem 1
# with open("rsc/day2.txt") as inputFile:
#     for line in inputFile:
#         temp = list(line.strip('\n').split(' '))
#         tempLength = len(temp)
#         previousDiff = 0
#
#         for i in range(1, tempLength):
#             diff = int(temp[i]) - int(temp[i-1])
#
#             #print("Previous error status : " + str(previousError))
#             #print("Compare element n°" + str(i-1) + " : " + temp[i-1] + " with element n°" + str(i) + " : " + temp[i])
#             #print("Previous difference was : " + str(previousDiff) + " and current diff is : " + str(diff) + "\n\n")
#
#             # Deviation not between 1 and 3
#             if (abs(diff) < 1 or abs(diff) > 3):
#                 break
#             
#             # First diff exception handling
#             if i == 1:
#                 previousDiff = diff
#                 continue
#
#             # Not strictly increasing nor decreasing
#             if previousDiff * diff < 0:
#                 break
#
#             # If we reach the end of the list, we can assume its a valid report
#             if i == tempLength - 1:
#                 result += 1
#                 break
#
#             previousDiff = diff
#         previousError = False


## Problem 2
invalidReports = []

def isValidReport(report):
    for i in range(1, len(report)):
        diff = int(report[i]) - int(report[i-1])

        #print("Previous error status : " + str(previousError))
        #print("Compare element n°" + str(i-1) + " : " + temp[i-1] + " with element n°" + str(i) + " : " + temp[i])
        #print("Previous difference was : " + str(previousDiff) + " and current diff is : " + str(diff) + "\n\n")

        # Deviation not between 1 and 3
        if (abs(diff) < 1 or abs(diff) > 3):
            return False
            
        # First diff exception handling
        if i == 1:
            previousDiff = diff
            continue

        # Not strictly increasing nor decreasing
        if previousDiff * diff < 0:
            return False

        previousDiff = diff
    return True

with open("rsc/day2.txt") as inputFile:
    for line in inputFile:
        report = list(line.strip('\n').split(' '))
        previousDiff = 0
        
        if isValidReport(report):
            result += 1
        else:
            invalidReports.append(report)
            for i in range(len(report)):
                variation = report[:i] + report[(i+1):]
        
                if isValidReport(variation):
                    result += 1
                    break

print(result)
