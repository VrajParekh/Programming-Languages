# list = [['v', 1], ['s', 2], ['f', 3]]

# for name, val in reversed(list):
#     print(name, " ", val)

# print("m"*10)

n = int(input())
list = []
while n:
    ele = int(input())
    list.append(ele)
    n = n-1
list.sort(reverse=True)
print(list[1])
