class Circle:
    def __init__(self,tup, radius, color):
        self.center = tup
        self.radius = radius
        self.color = color
    def perimeter(self):#周长
        return 3.14 * 2 * self.radius
    def area(self):#面积
        return 3.14 * self.radius * self.radius
circle = Circle((0,0),5,"黑色")
print(format(circle.perimeter(),'.2f'))
print(float(circle.area()))
