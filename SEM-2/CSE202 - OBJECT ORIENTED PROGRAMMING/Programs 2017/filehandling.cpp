#include<fstream>
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

main()
{	string name, name1;
	float cost,cost1;
    ofstream outf("item.doc");

cout<<"\nenter item name";
getline(cin,name);
outf<<name<<"\n";

cout<<"\nenter cost";
cin>>cost;
outf<<cost<<"\n";
outf.close();

ifstream inf("item.doc");
getline(inf,name1);
inf>>cost1;
cout<<"\nitem name"<<name1;
cout<<"\nitem cost"<<cost1;
inf.close();

getch();
}
