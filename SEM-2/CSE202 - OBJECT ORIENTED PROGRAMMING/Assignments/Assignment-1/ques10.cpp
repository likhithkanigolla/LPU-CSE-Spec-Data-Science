#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int a;
	float b;
	cout<<"enter number";
	cin>>a>>b;
	cout<<setw(5)<<a<<endl<<setprecision(5)<<b;
}
