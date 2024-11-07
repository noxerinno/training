# list=[1,12,7,2,3,9,12,4]
# list=[x for x in list if x != 12]
# list.sort()

balanced=[7,2,4,5,8,9,11,85930]
unbalanced=[7,2,4,5,8,9,11,13,85930]

balanced_left=[x for x in balanced if x < balanced[0]]
balanced_right=[x for x in balanced if x > balanced[0]]

unbalanced_left=[x for x in unbalanced if x < unbalanced[0]]
unbalanced_right=[x for x in unbalanced if x > unbalanced[0]]

# is_balanced = "false" if abs(len(balanced_left) - len(balanced_right)) > 1 else "true"
is_balanced = "false" if abs(len(unbalanced_left) - len(unbalanced_right)) > 1 else "true"

print(is_balanced)