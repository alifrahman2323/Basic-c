class Car:
    def __init__(self) -> None:
        self.acc = False
        self.brk = False
        self.cluch = False
        pass

    def start(self):
        self.cluch = True
        self.acc = True
        print("Car Started..")

car1 = Car()
car1.start()