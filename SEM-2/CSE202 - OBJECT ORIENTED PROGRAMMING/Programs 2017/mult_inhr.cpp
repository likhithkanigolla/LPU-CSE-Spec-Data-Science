#include <iostream.h>
#include <conio.h>
class M
{
protected:
	int m;
public:
	void get(int);
};
class N:public M
{
protected:
	int n;
public:
	void get(int);
};
class P: public N
{
public:
	void display(void);
    //void get(int z)
    //{ cout<<z<<endl;}
};

int main()
{
P p;
p.N::get(10);		//m=10
p.M::get(20);			//n=20
p.display();
getch();			//m*n = 200
return 0;
}

void M::get(int x)
{ m=x;}


void N::get(int y)
{cout<<"N:"<<endl; n= y;}
void P::display(void)
{
cout<<"m="<<m<<"\n";
cout<<"n="<<n<<"\n";
cout<<"m*n="<<m*n<<"\n";
}
