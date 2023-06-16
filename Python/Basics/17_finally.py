def func():

    try:
        list = [1, 2, 3, 4, 5]
        i = int(input("enter the index: "))
        print(list[i])
        return 1

    except:
        print("some error occured")
        return 0

    finally:
        print("i am always executed")


x = func()
print(x)
