# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next


# num1 = "0"
# num2 = "0"
# res = []

# if l1:
#     num1 = ""
#     while l1.next is not None : 
#         num1 += str(l1.val)
#         l1 = l1.next

# if l2:
#     num2 = ""
#     while l2.next is not None : 
#         num2 += str(l2.val)
#         l2 = l2.next

# sumNums = int(num1[::-1]) + int(num2[::-1])
# sumNums = str(sumNums)[::-1]

# for digit in sumNums:
#     res.append(int(digit))

# return res

# ===================================================

# temp = "Testing"
# temp2 = ""

# for letter in temp:
#     temp2 += letter
#     print(temp2 + '-' + str(type(letter)))


# temp1 = "1"
# temp2 = "1"

# temp1 = "0" = temp2

# print(temp1)
# print(temp2)

# integer = 19
# print(integer // 10)

# ===================================================

# num1 = "0"
# num2 = "0"
# res = []

# if l1 and l2:
#     num1 = ""
#     while l1.next is not None : 
#         num1 += str(l1.val)

# if l2:
#     num2 = ""
#     while l2.next is not None : 
#         num2 += str(l2.val)

# sumNums = int(num1[::-1]) + int(num2[::-1])
# sumNums = str(sumNums)[::-1]

# for digit in sumNums:
#     res.append(int(digit))

# return res

# def retreiveNumber(listNode: ListNode, value: str):
#         if listNode is None:
#             return

#         value += str(listNode.value)
#         retreiveNumber(listNode.next, value) 

# ================= VALID =======================

# if not l1 or (l1.val == 0 and l1.next is None):
#     return l2

# if not l2 or (l2.val == 0 and l2.next is None):
#     return l1

# num1 = ""
# num2 = ""
# res = None

# while l1 is not None : 
#     num1 += str(l1.val)
#     l1 = l1.next

# while l2 is not None : 
#     num2 += str(l2.val)
#     l2 = l2.next

# sumNums = str(int(num1[::-1]) + int(num2[::-1]))

# for digit in sumNums:
#     res = ListNode(digit, res)

# return res

# ============== OPTIMIZED ===============


if not l1 or (l1.val == 0 and l1.next is None):
            return l2

        if not l2 or (l2.val == 0 and l2.next is None):
            return l1

        num1 = ""
        num2 = ""
        carriedNum = 0
        resList = []
        res = None

        while l1 is not None and l2 is not None : 
            sumNums = l1.val + l2.val + carriedNum
            carriedNum = 0
            
            if sumNums >= 10:
                sumNums = sumNums - 10 
                carriedNum = 1

            resList.append(sumNums)
            l1 = l1.next
            l2 = l2.next

        if l1 is None and l2 is not None: 
            while l2 is not None:
                sumNums = l2.val + carriedNum
                carriedNum = 0
            
                if sumNums >= 10:
                    sumNums = sumNums - 10 
                    carriedNum = 1

                resList.append(sumNums)
                l2 = l2.next
        elif l2 is None and l1 is not None: 
            while l1 is not None:
                sumNums = l1.val + carriedNum
                carriedNum = 0
            
                if sumNums >= 10:
                    sumNums = sumNums - 10 
                    carriedNum = 1
                    
                resList.append(sumNums)
                l1 = l1.next

        if carriedNum:
            resList.append(carriedNum)
        
        resList.reverse()
        for digit in resList:
            res = ListNode(digit, res)

        return res


# =============== CLEANING ======================

if not l1 or (l1.val == 0 and l1.next is None):
            return l2

        if not l2 or (l2.val == 0 and l2.next is None):
            return l1

        num1 = ""
        num2 = ""
        carriedNum = 0
        resList = []
        res = None

        while not (l1 is None and l2 is None) : 
            if l1 is None:
                l1 = ListNode(0, None)
            
            if l2 is None:
                l2 = ListNode(0, None)

            sumNums = l1.val + l2.val + carriedNum
            carriedNum = 0
            
            if sumNums >= 10:
                sumNums = sumNums - 10 
                carriedNum = 1

            resList.append(sumNums)
            l1 = l1.next
            l2 = l2.next

        if carriedNum:
            resList.append(carriedNum)
        
        resList = resList[::-1]
        for digit in resList:
            res = ListNode(digit, res)

        return res