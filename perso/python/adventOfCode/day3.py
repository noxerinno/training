import re

## Problem 1
# regex = r"mul\(\d{1,3},\d{1,3}\)"
# result = 0
#
# with open("rsc/day3.txt", 'r') as inputFile:
#     for mul in re.findall(regex, inputFile.read()):
#         result += int(mul.split(',')[0].split('(')[1]) * int(mul.split(',')[1].split(')')[0])
#
# print(result)



##Problem 2 - Try 1

# regex = r"mul\(\d{1,3},\d{1,3}\)"
# result = 0
#
# # condStatRegex = r"(?<=don't\(\))(.*)(?=do\(\))"
# # condStatRegex = r"don't\(\)(?!.*don't\(\).*do\(\))(.*?)(?=do\(\))"
# # condStatRegex = r"don't\(\)((?:(?!don't\(\)|do\(\)).)*)(?=do\(\))"
# # condStatRegex = r"(?<=don't\(\))(.*?)(?=do\(\))"
# # condStatRegex = r"(don't\(\).*?do\(\))"
# condStatRegex = re.compile(r"(don't\(\))(.*?)(?:do\(\)|$)", re.MULTILINE)
#
# with open("rsc/day3.txt", 'r') as inputFile:
#     # print(re.findall(regex, re.sub(condStatRegex, '', inputFile.read())))
#     for mul in re.findall(regex, re.sub(condStatRegex, '', inputFile.read())):
#         # num1 = mul.split(',')[0].split('(')[1]
#         # num2 = mul.split(',')[1].split(')')[0]
#         # print(mul + " -> " + num1 + " * " + num2 + " = " + str(int(num1) * int(num2)))
#         result += int(mul.split(',')[0].split('(')[1]) * int(mul.split(',')[1].split(')')[0])
#
#     # with open("rsc/day3_output2.txt", 'w') as outputFile:
#     #     outputFile.write(re.sub(condStatRegex, '', inputFile.read()))
#
# print(result)


##Problem 2 - Try 2

regex = r"mul\(\d{1,3},\d{1,3}\)"
result = 0
enabled = True

def computeMuls(elem):
    global result

    for mul in re.findall(regex, elem):
        result += int(mul.split(',')[0].split('(')[1]) * int(mul.split(',')[1].split(')')[0])


with open("rsc/day3.txt", 'r') as inputFile:
    trimed = inputFile.read().split("don't()")

    computeMuls(trimed[0])

    for elem in trimed[1:]:
        secondTrim = elem.split("do()")
        for element in secondTrim[1:]:
            computeMuls(element)

print(result)
