#include<iostream.h>
class BinaryExample
{
    private:
int m,n;
    public:

    void setdata(int j, int k)
     {   m = j;
          n=k;   }
void display(){cout<<m<<"  "<<n;}
BinaryExample operator+ (BinaryExample & obj)
{BinaryExample t;
t.m=m+obj.m;
t.n=n+obj.n;
return t;     }
};
main()
{
    BinaryExample object1, object2,object3;
// overloaded operator called
object1.setdata(10,20);
object2.setdata(100,200);

//object3 = object1 + object2;
 object3=object1.operator+(object2);
 object3.display();
}

// ob1 = ob1 + ob2;
//equivalent to
//ob1 = ob1.operator+(ob2);


