class Human:
    def __init__(self, n, o):
        self.name = n
        self.occupation = o

    def do_work(self):
        if self.occupation == "cricket player":
            print(self.name, "plays cricket")
        elif self.occupation == "football player":
            print(self.name, "plays football")

    def speaks(self):
        print(self.name, "says how are you?")


virat = Human("virat kohli", "cricket player")
virat.do_work()
virat.speaks()

messi = Human("messi", "football player")
messi.do_work()
messi.speaks()
