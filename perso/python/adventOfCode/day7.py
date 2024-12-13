from itertools import product

results = []
operands = []

# Reading input data
with open("rsc/day7_test.txt", 'r') as inputFile:
    for line in inputFile.read().strip().split('\n'):
        results.append(line.split(':')[0])
        operands.append(line.split(':')[1].strip().split(' '))

        # print(result + " - " + str(operand))

## Problem 1
calibrationSum = 0
operators = ['+', '*', '||']

def createOperatorsCombination(operandCount):
    yield from product(*([operators] * operandCount))

# for i in range(len(results)):
#     operandCount = len(operands[i])
#  
#     for operatorsCombination in createOperatorsCombination(operandCount - 1):
#         calculatedResult = int(operands[i][0])
#         result = int(results[i])
#  
#         for index in range(operandCount - 1):
#             if operatorsCombination[index] == operators[0]:
#                 calculatedResult += int(operands[i][index + 1])
#
#             if operatorsCombination[index] == operators[1]:
#                 calculatedResult *= int(operands[i][index + 1])
#
#         if calculatedResult == result:
#             calibrationSum += result
#             break
#
# print(calibrationSum)


## Problem 2
for i in range(len(results)):
    operandCount = len(operands[i])

    for operatorsCombination in createOperatorsCombination(operandCount - 1):
        calculatedResult = int(operands[i][0])
        result = int(results[i])

        ## Problem 2
        operatorsCombination = list(operatorsCombination)
        operatorsCombination.insert(0, 'X')
        combinedOperands = []
        newOperators = []

        for index in range(operandCount):
            # If operator == 'X' (tampon), continue
            if operatorsCombination[index] == 'X':
                combinedOperands.append(operands[i][index])
                continue

            # If operator == "||", we concatenate corresponding operands
            if operatorsCombination[index] == operators[2]:
                newLastValue = combinedOperands[-1] + operands[i][index]
                combinedOperands[-1] = newLastValue
                # combinedOperands[-1] = combinedOperandsCount[-1] + operands[i][index]
                continue
            
            combinedOperands.append(operands[i][index])
            newOperators.append(operatorsCombination[index])

        combinedOperandsCount = len(combinedOperands)

        # print(str(operatorsCombination) + "\n" + str(operands[i]) + "\n" + str(combinedOperands) + "\n" + str(newOperators) + "\n")
 
        for index in range(combinedOperandsCount - 1):
            if newOperators[index] == operators[0]:
                calculatedResult += int(combinedOperands[index + 1])

            if newOperators[index] == operators[1]:
                calculatedResult *= int(combinedOperands[index + 1])

        print(str(combinedOperands) + "\n +   " + str(newOperators) + "\n =      " + str(calculatedResult) + "\n")

        if calculatedResult == result:
            calibrationSum += result
            # break

print(calibrationSum)




# for i in range(len(results)):
#     operandCount = len(operands[i])
#
#     for operatorsCombination in createOperatorsCombination(operandCount - 1):
#         equation = ""
#         result = int(results[i])
#        
#         for index in range(operandCount - 1):
#             equation += operands[i][index]
#             equation += ' '
#             equation += operatorsCombination[index]
#             equation += ' '
#
#         equation += operands[i][operandCount - 1]
#         
#         if i == 8:
#             print(equation + " = " + str(eval(equation)) + " | " + str(result))
#         
#         if eval(equation) == result:
#             # print(equation + " = " + str(eval(equation)) + " | " + str(result))
#             calibrationSum += result
#             break
#
# print(calibrationSum)
