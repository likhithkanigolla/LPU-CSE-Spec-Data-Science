class triangle:
    def __init__(self,a,b,c):
        self.s1=a
        self.s2=b
        self.s3=c
        
    def area(self):
        s=(self.s1+self.s2+self.s3)/2
        area=(s*(s-self.s1)*(s-self.s2)*(s-self.s3))**0.5
        print('Area is',area)
        
    def perimeter(self):
        peri=self.s1+self.s2+self.s3
        print('Perimeter is',peri)

    def equi(self):
        if(self.s1==self.s2==self.s3):
            print('True')
        else:
            print('False')
    
x,y,z=int(input()),int(input()),int(input())
t1=triangle(x,y,z)
t1.area()
t1.perimeter()
t1.equi()
