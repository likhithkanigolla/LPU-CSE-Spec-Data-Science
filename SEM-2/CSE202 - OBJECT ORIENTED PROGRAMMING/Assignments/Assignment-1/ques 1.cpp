#include<iostream>
using namespace std;
int fb(int n);
main()
{
	int n,i=0;
	cout<<"enter numbers";
	cin>>n;
	while(i<n)
	{
		cout<<" "<<fb(i);
		i++;
	}
	return 0;
}
int fb(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fb(n-1)+fb(n-2));
    }
}
