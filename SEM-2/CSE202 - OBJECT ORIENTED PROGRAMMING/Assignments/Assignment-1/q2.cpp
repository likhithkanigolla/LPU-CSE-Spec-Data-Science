#include<iostream>
using namespace std;
int sum(int n);
main()
{
	int n;
	cout<<"enter number to find the sum of n natural numbers";
	cin>>n;
	cout<<" "<<sum(n); 
}
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	return n+sum(n-1);
}
