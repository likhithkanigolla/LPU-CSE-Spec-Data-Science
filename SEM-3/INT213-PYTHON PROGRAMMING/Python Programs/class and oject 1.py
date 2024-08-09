class triangle:
    def __init__(self,a,b,c):
        self.__s1=a #s1 is private
        self._s2=b  #s2 is protected
        self.s3=c   #s3 is public
        
    def __area(self): #area function is private
        s=(self.__s1+self._s2+self.s3)/2
        area=(s*(s-self.__s1)*(s-self._s2)*(s-self.s3))**0.5
        print('Area is',area)
    def __del__(self):
        print('Deleted')
x,y,z=int(input()),int(input()),int(input())
t1=triangle(x,y,z)
t2=triangle(x,y,z)
t1._triangle__area()
del t1

