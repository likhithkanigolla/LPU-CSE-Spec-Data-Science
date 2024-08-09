#include<iostream>
#include<math.h>
using namespace std;

int interest(int x,float y,float z=8.5){
	int si=(x*y*z)/100;
	int ci=x*pow(1+z,y);
	cout<<"Simple interst ="<<si;
	cout<<"\n Compound interst ="<<ci;
	
}
main()
{
	int amt;
	float time;
	cout<<"\n Enter the amount in rupees ";
	cin>>amt;
	cout<<"\n Enter the time in years ";
	cin>>time;
	if(time>=3)
	  interest(amt,time);
	  else
	  cout<<"\n !!!TRY AGAIN!!!\nTime should be minimum 3 years";
	  
	  
}

