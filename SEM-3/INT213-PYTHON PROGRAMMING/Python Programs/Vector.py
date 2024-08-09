class vector:
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def __add__(self,other):
        v3=vector(self.a+other.a,self.b+other.b)
        return v3
    def __str__(self):
        v="vector(%d,%d)"%(self.a,self.b)
        return v

v1=vector(2,10)
v2=vector(5,8)
v3=v1+v2
print(v1,"+",v2,"=",v3)
