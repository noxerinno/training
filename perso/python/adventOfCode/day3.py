import re

regex = r"mul\(\d{1,3},\d{1,3}\)"
#condStatRegex = r"(?<=don't\(\))(.*)(?=do\(\))"
#condStatRegex = r"don't\(\)(?!.*don't\(\).*do\(\))(.*?)(?=do\(\))"
#condStatRegex = r"don't\(\)((?:(?!don't\(\)|do\(\)).)*)(?=do\(\))"
condStatRegex = r"(?<=don't\(\))(.*?)(?=do\(\))"
result = 0

with open("rsc/day3.txt", 'r') as inputFile:
    #print(re.findall(regex, re.sub(condStatRegex, '', inputFile.read())))
    
    for mul in re.findall(regex, re.sub(condStatRegex, '', inputFile.read())):
        num1 = mul.split(',')[0].split('(')[1]
        num2 = mul.split(',')[1].split(')')[0]
        result += int(mul.split(',')[0].split('(')[1]) * int(mul.split(',')[1].split(')')[0])
        print(mul + " -> " + num1 + " * " + num2 + " = " + str(int(num1) * int(num2)))

print(result)
