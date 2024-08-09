#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
	int ar[2][5],r,c,s;
	
	cout<<"\nenter values:";
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<5;c++)
		{
			cin>>ar[r][c];
		}
	}
	cout<<endl;
	
		for(r=0;r<2;r++)
	{
		for(c=0;c<5;c++)
		{
			cout<<"  "<<ar[r][c];
		}
		cout<<endl;
	}
cout<<"\n enter element you want to search:";
	cin>>s;
  
    for(r=0;r<2;r++)
	{
		for(c=0;c<5;c++)
		{
			if(s==ar[r][c])
			{
			cout<<"\n element found at ar["<<r<<"]["<<c<<"]";
		//break;
		}	
	}
			}
}
