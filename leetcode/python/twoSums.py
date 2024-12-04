# nums=[-3,4,3,90]
# target=0

# filtered_nums = [x for x in nums if abs(x) <= abs(target)]
# print(filtered_nums)

# pairs = [(a, b) for idx, a in enumerate(filtered_nums) for b in filtered_nums[idx + 1:]]
# for pair in pairs:
#     print(pair[0] + pair[1])
    # res=[]
    # if pair[0] + pair[1] == target:
    #     res.append(nums.index(pair[0]))
    #     nums.pop(nums.index(pair[0]))
    #     res.append(nums.index(pair[1]) + 1)
    #     print(res)

# ================ C K C ===================


# nums=[12,4,0,3,2,5,1,7,3]
# target=6


# for i in range(len(nums)):
#     for j in range(i+1, len(nums)):
#         if nums[i] + nums[j] == target:
#             print([i,j])

# ================ Basic ===================

# nums=[12,4,0,3,2,5,1,7,3]
# target=6
nums=[-1,-2,-3,-4,-5]
target=-8

sorted_nums = nums.copy()
sorted_nums.sort()
print(sorted_nums)

for i in sorted_nums:
    last_sum = None
    for j in reversed(sorted_nums):
        if i + j == target:
            # print(str(i) + ' ' + str(nums.index(i)))
            # print(str(j) + ' ' + str(nums.index(j)))
            if i != j:
                print([nums.index(i), nums.index(j)])
            else:
                index = nums.index(i)
                nums.pop(nums.index(i))
                
                print([index,nums.index(j) + 1])
        elif last_sum is not None and ((i + j < target) != (last_sum < target)) :
            last_sum = i + j
            break

        last_sum = i + j
