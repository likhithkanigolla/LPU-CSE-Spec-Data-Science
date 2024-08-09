#include<iostream>
using namespace std;
class st
{
	char name[25];
	int rno;
	float marks;
	public:
		void get();
		void put();
	
};
void st::get()
{
	cout<<"enter details name rno marks";
	cin>>name>>rno>>marks;
}
void st::put()
{
	cout<<endl<<"details are";
	cout<<name<<endl<<rno<<marks;
	
}
main()
{
	st a[10];
	int i;
	for(i=0;i<10;i++)
	{
		a[i].get();
	}
	for(i=0;i<10;i++)
	{
	a[i].put();
	}
	
}
