#include<fstream.h>
#include<iostream.h>
main()
{	char name[30];
	float cost;
ofstream outf("item.txt");
cout<<"enter item name";
cin>>name;
outf<<name<<"\n";

cout<<"enter cost";
cin>>cost;
outf<<cost<<"\n";
outf.close();
ifstream inf("item.txt");
inf>>name;
inf>>cost;

cout<<"item name"<<name<<endl;
cout<<"item cost"<<cost<<endl;
inf.close();

}
