# set is a collection of non repetitive values
# set = {1, 3, 4, 5, 1, 1, 1, 1}
# print(set)
# print(type(set))

# Important : this syntax will create an empty dictionary and not an empty set
# a = {}
# print(type(a))

# An empty set can be created using the below syntax:
a = set()
print(type(a))

# adding values to an empty set
a.add(1)
a.add(2)
a.add(3)
a.add(3)
a.add(3)  # adding a value repeatedly does not changes a set

print(a)


# a.add([1, 2, 3])  # we cannot add list into set bcz list is mutable
# a.add({4: 3})  # we cannot add dictionary into set bcz dictionary is mutable
a.add((1, 2, 3, 4))

print(a)

# Properties of set
# 1. unordered
# 2. unindexed a[0]-->will throw an error
# 3. there is no way to change items in sets
# 4. sets cannot contain duplicate values

print(len(a))

print(a)
a.remove(1)
# a.remove(0) #remove will thrown an error if element is not in set

# a.discard(0)  # discard will not thrown an error either element is present or not
print(a)


print("poped element:", a.pop())  # koi pan pop karse
# removes an arbitary element from the set and returns the removed element
print(a)

# more methods: clear, union, intersection
