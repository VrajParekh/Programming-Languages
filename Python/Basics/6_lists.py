# # create a list using []
a = [1, 2, 3, 4, 5, True, "Vraj", 1.52]
# ind 0  1  2  3  4
# print the list using print() function
# print(a)

# # Access elements using a[0] a[1] a[2] a[-1]
# print(a[2])

# # Change the value of list using [Lists are mutable]
# a[0] = 144
# print(a)

# # we can create a list with items of different types
# c = [23, "vraj", False, 6.4]
# print(c)

# # List slicing
# print(a[0:3])

# List Methods
list = [1, 45, 7, 6, 88, 99, 47, 10, 2, 74, 15, 15, 15]
# print(list.sort())  # this will not work

print("List: ", list)
list.sort()  # Sort the list
print("Sorted list: ", list)

list.sort(reverse=True)  # Sort the list
print("Sorted list(in reverse): ", list)

list.reverse()  # reverse the list
print("Reverse list: ", list)

list.append(100)  # append element to the list
print("Appended list: ", list)

list.remove(99)  # removing the perticular element from the list
print("Removed element list: ", list)

list.pop(1)  # popped the element from perticular index
print("Popped list: ", list)

list.insert(0, 999)  # inserting element at the index 0
print("Inserted element list: ", list)


list1 = [1, 2, 4, 5]
list2 = [54, 15, 64]
list1.extend(list2)#list1 ko kholo and list2 ke elements ko last me laga do
print(list1)


# lst = [i for i in range(10) if i % 2 == 0]  # only even numbers are in list
# print(lst)
