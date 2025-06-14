class Student:
    name = "ALIF"
    def __init__(self, name, marks) -> None:
        self.name = name
        self.marks = marks
        print("Adding new student in database:")
        pass
    def welcome(self):
        print("Welcome student",self.name)
    def get_marks(self):
        return  self.marks

s1 = Student("Prince" , 97)
s1.welcome()
print()

s2 = Student("Alif",88)
print(s2.name, s2.marks)