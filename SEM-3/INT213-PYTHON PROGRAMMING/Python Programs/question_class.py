class linear_equation:
    def __init__(self,a,b,c,d,e,f):
        self.a=a
        self.b=b
        self.c=c
        self.d=d
        self.e=e
        self.f=f
        
    def issolvable(self):
        if((self.a)*(self.d)-(self.b)*(self.c))!=0:
            return True

    def getx(self):
         if self.issolvable()==True:
             self.x=((self.e*self.d)-(self.b*self.f))/((self.a*self.d)-(self.b*self.c))
             return self.x

    def gety(self):
         if self.issolvable()==True:
             self.y=((self.a*self.f)-(self.e*self.c))/((self.a*self.d)-(self.b*self.c))
             return self.x

a=linear_equation(1,2,3,4,5,6)
print(a.getx())
print(a.gety())
