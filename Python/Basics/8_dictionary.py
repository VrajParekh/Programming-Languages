# dictionary is a collection of key-value pair

myDict = {
    "chemistry": 85,
    "maths": 90,
    "list": [1, 2, 3, 4, 5, 6],
    "vraj": "A Coder",
    1: 2
}
print(myDict)
# print(myDict["chemistry"])
# print(myDict["list"])
# print(myDict.get('chemistry')) #it will not throw an error if key is not exist It will print 'none'

# myDict["chemistry"] = 454
# print(myDict)

# Properties
# 1. ordered
# 2. Mutable
# 3. indexed
# 4. cannot contain duplicate keys

# Dictionary methods

print(myDict.keys())
print(type(myDict.keys()))  # type id dict_keys

print(myDict.values())
print(type(myDict.values()))

print(myDict.items())

# update the dictionary by adding key-value pair
myDict.update({"chemistry": 7878})
myDict.update({"physics": 74})  # we can add new pair also using this
print(myDict)

# popping elements from the dictionary
myDict.pop("vraj")
# myDict.popitem()  # it will remove last key-value pair from the dictionary
print(myDict)

# iterate through dict:
# for key, value in myDict.items():
# print(f"the value corresponding to the key {key} is {value}")
