for i in range(1, 11):
    print(i)


a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
total = 0
for i in range(len(a)):  # if we don't specify start index then it will be 0 by default
    j = i + 1
    print("i,j value : ", i, j)
    total = total + i
print("Total :", total)
