class Student:
    def __init__(self, phy, chem, math) -> None:
        self.phy = phy
        self.chem = chem
        self.math = math
        self.update_percentage()

    def update_percentage(self):
        # Update the percentage attribute
        self.percentage = str((self.phy + self.chem + self.math) / 3) + "%"

# Creating an instance of Student
stu1 = Student(98, 97, 99)
print(stu1.percentage)  # This will print the initial percentage

# Changing the phy attribute
stu1.phy = 88

# Recalculate percentage after updating the attribute
stu1.update_percentage()
print(stu1.percentage)  # This will print the updated percentage


print("apun" + "college")
print(type("apun"))



