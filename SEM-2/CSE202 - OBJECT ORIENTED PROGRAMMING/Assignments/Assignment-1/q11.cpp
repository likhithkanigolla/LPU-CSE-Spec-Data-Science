#include<iostream>
using namespace std;
class call
{ public:
	void value(int a,int b);
	void ref(int &c,int &d);
	void add(int *e,int *f);
};
void call::value(int a,int b)
{
	a+=1;
	b+=1;
	cout<<a<<endl<<b<<endl;
}
void call::ref(int &c,int &d)
{
	c+=1;
	d+=1;
	cout<<c<<endl<<d<<endl;
}
void call::add(int *e,int *f)
{
	*e=*e+1;
	*f+=1;
	cout<<*e<<endl<<*f;
}
main()
{
	call s;
	int x,y;
	cout<<endl<<"enter x and y for call by  value";
	cin>>x>>y;
	s.value(x,y);
	int l,m;
	cout<<endl<<"enter l and m for call by address";
	cin>>l>>m;
	s.add(&l,&m);
	int o,p;
	cout<<endl<<"enter o and p for reference";
	cin>>o>>p;
	s.ref(o,p);
	}
