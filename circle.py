import math

class Circle:
    def __init__(self, radious):
        self.radious = radious
    
    def calculate_circle_area(self):
        return math.pi *self.radious**2
    
    def calculate_circle_perameter(self):
        return 2* math.pi * self.radious
radious =float(input("Input the radious of the circle:"))
circle = Circle(radious)

area = circle.calculate_circle_area()

perameter = circle.calculate_circle_perameter()

print("Area of the circle: ", area)
print("Perimeter of the circle: ",perameter)        