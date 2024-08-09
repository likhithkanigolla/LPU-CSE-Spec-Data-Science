#include<fstream.h>
#include<iostream.h>
main()
{
ofstream fout;
fout.open("country");
fout<<"usa\n";
fout<<"uk\n";
fout<<"india\n";
fout.close();

fout.open("capital");
fout<<"washinton\n";
fout<<"london\n";
fout<<"india\n";
fout.close();

const int n=80;
char line[n];
ifstream fin;

fin.open("capital");
cout<<"contents of capital file";
while(fin)
{	fin.getline(line,n);
		cout<<endl<<line<<"\n";
}
fin.close();

ifstream in;

in.open("country");
cout<<"contents of country file";
while(in)
{	in.getline(line,n);
		cout<<endl<<line<<"\n";
}
in.close();



}



