#include<iostream>
using namespace std;
int table(int x,int y){
 	
 	if(y<1)
 	{
 		return 0;
	 }
	 else
 	 
 	 
 	 table(x,y-1);
 	 cout<<"\n";
	  cout<<x<<"*"<<y<<"="<<x*y; }

main()
{
	 int a,b;
	 cout<<"Enter the number ";
	 cin>>a;
	 cout<<"Enter the number upto which you want to print the table ";	
	 cin>>b;
	 
	 table(a,b);  }
 


//gursharan.16967@lpu.co.in


