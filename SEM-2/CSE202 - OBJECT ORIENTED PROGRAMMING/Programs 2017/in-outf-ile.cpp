 #include<iostream>
 #include<conio.h>
 #include<strings.h>
 #include<fstream>
 using namespace std;
 
main()
{ 
/*char string[80];
 cout<<"enter a string";
 cin>>string;
 int len= strlen(string);
 cout<<"length of string is"<<len<<endl;
 fstream file;
 file.open("text.txt", ios::in|ios::out|ios::trunc);
 for(int i=0;i<len;i++) 
{	file.put(string[i]);
}
file.seekg(0);*/
 fstream file;
 file.open("text.txt", ios::in);
char ch;
while(file)
{file.get(ch); 
cout<<ch;
}
getch();}

