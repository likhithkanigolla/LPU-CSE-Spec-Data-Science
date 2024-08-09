#include<iostream>
#include<string>
using namespace std;

main()
{
	string A;
	A="Welcome";
	string B(A,3);
	string C("here");
	string D;
	
	cout<<endl<<A;
	cout<<endl<<B;
	cout<<endl<<C<<endl;
	
	B=B+C;
	
	cout<<endl<<B;
	
	D=C;
	
	if(D==C)
	cout<<"\n Same";
	else
	cout<<"\n diff.";
	
	D="Here";
	
	if(D<C)
	cout<<"\n Less";
	else
	cout<<"\n greater";
	
	
	
}
