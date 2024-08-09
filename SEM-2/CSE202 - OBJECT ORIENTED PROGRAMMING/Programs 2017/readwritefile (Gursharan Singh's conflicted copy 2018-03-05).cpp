  #include<iostream>
 #include<conio.h>
 #include<strings.h>
 #include<fstream>
 using namespace std;
 class inventory
 { int a,b,c;
 public:
        void readdata()
        {cin>>a>>b>>c;}
        void writedata()
        {cout<<a<<"\n"<<b<<"\n"<<c;}
        };
main()
{ 
fstream file;
 inventory iobj, iobr;
 file.open("STOCK.doc", ios:: in|ios::out);
  cout<<"enter detail for items";
 iobj.readdata();
 file.write((char*) & iobj,sizeof(iobj));
file.seekg(0,ios::beg);
 file.read((char*) & iobr ,sizeof(iobr));
iobr.writedata();
file.close();
getch();
}
  
