#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
	int ar[5],r,c,s;
	int *p;
	cout<<"\nenter values:";
		p=ar;
	
		for(c=0;c<5;c++)
		{
			cin>>p[c];
		}
	
	cout<<endl;

	
		for(c=0;c<5;c++)
		{
			cout<<"  "<<*p;
			p++;
		}
		cout<<endl;
		p=ar;
	
cout<<"\n enter element you want to search:";
	cin>>s;
  
   
		for(c=0;c<5;c++)
		{
			if(s==*(p+c))
			{
			cout<<"\n element found at ar["<<c<<"]";
		break;
		}	
	}
			
}
