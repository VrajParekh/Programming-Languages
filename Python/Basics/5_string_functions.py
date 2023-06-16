story = "Once upon a time there lived a ghost he was known to be a killer and feared the most"

print(len(story))  # return integer
print(story.endswith("most"))  # return boolean
print(story.count("a"))  # return integer
print(story.find("time"))  # returns index
story = story.replace("killer", "Murderer")
print(story)

print(story[::2])
print(story[::-1])  # it will print in reverse
print(story[::-2])
print(story)
