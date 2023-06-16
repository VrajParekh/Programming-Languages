# Write python program to find largest element in array.

def largest_in_array(arr, n):
    largest = arr[0]
    i = 1
    for i in range(n):
        if arr[i] > largest:
            largest = arr[i]

    return largest


arr = []
n = int(input("Enter lenght of an array:"))
for i in range(n):
    a = int(input())
    arr.append(a)
# print(arr)
print("Largest element in array is", largest_in_array(arr, n))
