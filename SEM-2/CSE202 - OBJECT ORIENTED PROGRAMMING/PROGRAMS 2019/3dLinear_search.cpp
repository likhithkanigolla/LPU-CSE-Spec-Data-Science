#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
	int ar[2][2][3],r,c,s,p;
	
	cout<<"\nenter values:";
	
	for(p=0;p<2;p++)
	{
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			cin>>ar[p][r][c];
		}
	} }
	cout<<endl;
	
		for(p=0;p<2;p++)
	{
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			cout<<"  "<<ar[p][r][c];
		}
	
		cout<<endl;
	}}

cout<<"\n enter element you want to search:";
	cin>>s;
  
  for(p=0;p<2;p++)
	{
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			if(s==ar[p][r][c])
			{
			cout<<"\n element found at ar["<<p<<"]["<<r<<"]["<<c<<"]";
		//break;
		}	
	}
			}
		}
}
