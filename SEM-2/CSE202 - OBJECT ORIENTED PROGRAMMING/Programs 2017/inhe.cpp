#include<iostream>
#include<conio.h>
using namespace std;
class data
{  int x;   char y;   double z;
public:
    data(){cout<<"const of base class: data"<<endl;}
~data(){cout<<"destructor of base class: data"<<endl;}
void in()
{ cin>>x>>y>>z;
}
void out()
{cout<<x<<y<<z;
}
};
class info:private data
{
public:
    info(){cout<<"const of derived class: info"<<endl;}
    ~info(){cout<<"destructor of derived class: info"<<endl;}
    void aa()
    {
        in();
        out();
    }
};
main()
{

    info i;
    i.aa();
    //i.out();
}

