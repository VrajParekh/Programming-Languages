name = "adit"
#       0123
print(name[0:2])  # 0 se leke (2-1) tak
print(name[:2])  # is same as [start_index:2]
print(name[1:])  # is same as [1:last_index]

print(name[-1])  # last
print(name[-4:-2])  # same as name[0:2]
print(name[-4:2])

name = "aditIsAGoodCollage"
#       0123456789

# 2-1=1 dar 1 skip karse  name[strat_ind : end_ind : rate_of_skip]
print(name[0::2])
