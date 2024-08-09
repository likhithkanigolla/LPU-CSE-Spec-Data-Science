#include<iostream>
#include<string>
using namespace std;
main()
{
 string s1,s2;
 int n,i;
 cout<<"enter strings";
 getline(cin,s1);
 getline(cin,s2);
 if(s1==s2)
 {
 	cout<<endl<<"Both the strings are equal so you need to enter number to print the table";
 	cin>>n;
 	for(i=1;i<=10;i++)
 	{
 		cout<<endl<<n<<"*"<<i<<"="<<(n*i);
	 }
 }
 else
 {
 	cout<<"Given strings are not equal";
 }
 
}
