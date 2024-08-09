#include<iostream>
using namespace std;
class si
{
	static int r;
	int t;
	float s;
	int p;
	public:
		void get()
		{
			cout<<"enter p and t";
			cin>>p>>t;
		}
		void put()
		{
			s=(p*r*t)/100;
			cout<<"simple interest is"<<s;
		}
};
int si::r=5;
main()
{
	si a;
	a.get();
	a.put();
}
