letter = "hey my name is {1} and i am from {0}"
country = "India"
name = "Vraj"

print(letter.format(country, name))

# alternate:-
print(f"hey my name is {name} and i am from {country}")
print(
    f"We can use f-strings like this : hey my name is {{name}} and i am from {{country}}")
