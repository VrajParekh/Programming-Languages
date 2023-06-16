n = input("Enter the number")

print(f"multiplication table for {n} is: ")

try:
    for i in range(1, 11):
        print(f"{int(n)} x {i} = {int(n) * i}")
except:
    print("sorry some error occured")

print("some lines of code")
print("end of program")
