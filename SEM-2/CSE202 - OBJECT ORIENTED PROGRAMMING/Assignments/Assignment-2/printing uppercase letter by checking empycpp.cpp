#include<iostream>
#include<string>
using namespace std;
main()
{
	string s;
	int i;
	cout<<"enter words ";
	getline(cin,s);
	i=s.empty();
	if(i==1)
	{
	cout<<endl<<"string is empty there for printing alphabets from a to z"<<endl<<endl;
	for(char c='A';c<='Z';c++)
	cout<<c;
	}
	else
	cout<<"string is not empty";
}
