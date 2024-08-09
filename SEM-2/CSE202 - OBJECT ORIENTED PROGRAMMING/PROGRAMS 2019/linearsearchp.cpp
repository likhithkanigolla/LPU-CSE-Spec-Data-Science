#include<iostream>
#include<stdio.h>
using namespace std;
void linearsearch(int *);
main()
{
	int ar[5],*p;
	int i;
	
	cout<<"enter values:";
	for(i=0;i<5;i++)
	{
		cin>>ar[i];
	}

linearsearch(ar);

}

void linearsearch(int *p)
{
	int s;
	cout<<"\n enter element you want to search:";
	cin>>s;
for(int i=0;i<5;i++)
	{
	if(s==p[i])
	{
		cout<<"\n element found at index = "<<i;
		break;
		}	
	}
}
