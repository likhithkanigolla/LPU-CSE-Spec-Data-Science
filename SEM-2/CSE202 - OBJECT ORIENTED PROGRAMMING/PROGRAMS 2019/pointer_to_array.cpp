#include<iostream>
#include<stdio.h>
using namespace std;
void p2a_m1(int *);
void p2a_m2(int *);
void p2a_m3(int *);
main()
{
	int ar[5],*p;
	int i;
	
	cout<<"enter values:";
	for(i=0;i<5;i++)
	{
		cin>>ar[i];
	}

p2a_m1(ar);
p2a_m2(ar);
p2a_m3(ar);

}

void p2a_m1(int *p)
{
	cout<<"\n pointer like array \n";
for(int i=0;i<5;i++)
	{
		cout<<endl<<"index= "<<i<<" at add =";
		printf("%d",&p[i]);
		cout<< " = "<<p[i];
	}	
}
void p2a_m2(int *p)
{	cout<<"\n pointer notation \n";

for(int i=0;i<5;i++)
	{
		cout<<endl<<"index= "<<i<<" at add =";
		printf("%d",(p+i));
		cout<< " = "<<*(p+i);
	}	
}

void p2a_m3(int *p)
{
	cout<<"\n like pointer to variable \n";
	
for(int i=0;i<5;i++)
	{
		cout<<endl<<"index= "<<i<<" at add =";
		printf("%d",p);
		cout<< " = "<<*p;
		p++;
	}	
}
