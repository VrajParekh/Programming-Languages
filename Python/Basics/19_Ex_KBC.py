questions = [
    ["What is my name ? ", "My", "Name", "Vraj", "Is", 3],
    ["What is my name ? ", "My", "Name", "Vraj", "Is", 1],
    ["What is my name ? ", "My", "Name", "Vraj", "Is", 2],
    ["What is my name ? ", "My", "Name", "Vraj", "Is", 3],
    ["What is my name ? ", "My", "Name", "Vraj", "Is", 2],
    ["What is my name ? ", "My", "Name", "Vraj", "Is", 2]
]

levels = [1000, 2000, 3000, 5000, 10000, 50000, 100000, 500000, 10000000]
money = 0
for i in range(0, len(questions)):
    print(f"Question {i+1} for {levels[i]}Rs is on your screen...")
    print(questions[i][0])
    print(f"a. {questions[i][1]}            b. {questions[i][2]}")
    print(f"c. {questions[i][3]}            d. {questions[i][4]}")
    ans = int(input("Enter Answer(1-4) or for quit enter 0... "))

    if(ans == 0):
        break
    elif(ans == questions[i][5]):
        print(f"Correct answer!!! you won {levels[i]}Rs")
        money += levels[i]
    else:
        print("Oh!!! Wrong answer")
        break
    
print(f"Congratulations You won {money}Rs !!!")
print("Thanks for playing...")
