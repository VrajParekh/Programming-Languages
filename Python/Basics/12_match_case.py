month = int(input("Enter month number:"))
# there is no need of break in python
match month:
    case 1:
        print("January")
    case 2:
        print("fabruary")
    case 3:
        print("march")
    case 4:
        print("april")
    case 5:
        print("may")
    case 6:
        print("june")
    case 7:
        print("july")
    case 8:
        print("auguest")
    case 9:
        print("september")
    case 10:
        print("october")
    case 11:
        print("november")
    case 12:
        print("december")
    case _:
        print("Invalid input")
