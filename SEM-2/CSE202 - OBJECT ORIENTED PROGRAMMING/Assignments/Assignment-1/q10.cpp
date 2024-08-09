#include<iostream>
using namespace std;
class cal
{
	public:
	int b,h,n,i=1;
	float area;
	void triangle()
	{
		cout<<"enter base and height to calculate area";
		cin>>b>>h;
	}
	void table();
	void ans();
	
};
void cal::table()
{
	cout<<"enter number to calculate tables";
	cin>>n;
};
void cal::ans()
{
	area=0.5*b*h;
	cout<<endl<<"area is"<<area<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
};
main()
{
	cal s;
	s.triangle();
	s.table();
	s.ans();
}
