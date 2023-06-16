# used to get index and value of each element at the same time

marks = [100, 20, 45, 60, 50]

for index, value in enumerate(marks):
    print(index, value)

for tuple in enumerate(marks):
    print(tuple)