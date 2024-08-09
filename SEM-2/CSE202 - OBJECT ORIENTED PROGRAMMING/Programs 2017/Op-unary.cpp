#include<iostream.h>
class space{
private:
int x,y,z;
public:
space(int a, int b, int c)
{x=a; y=b; z=c;}
void display()
{cout<<x<<y<<z<<"\n";}
void operator-()
{x=-x; y=-y; z=-z;}
};
 main()
{space s(10,-20,30);
cout<<"s :";
s.display();
-s;
cout<<"s :";
s.display();
//getch();
}
