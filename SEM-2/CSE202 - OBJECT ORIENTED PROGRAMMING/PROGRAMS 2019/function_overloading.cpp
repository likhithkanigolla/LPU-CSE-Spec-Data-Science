#include<iostream>
using namespace std;
void print(int );
void print(int , int);
void print(char );
void print(double );
void print(int,char);
void print(char,int);

main()
{ 
  print(10);
  print(26.71);
  print('a');
  print(100,345);
  print('Z',123);
  print(48,'X');
}
 void print(int a){
 	 cout<<"\n Integer= "<<a;
 }
 void print(double b){
 	 cout<<"\n Float= "<<b;
 }
 void print(char c){
 	 cout<<"\n Char= "<<c;
 }
 void print(int d,int e){
 	cout<<"\n 1st Integer= "<<d;
 	 cout<<"\n 2nd Integer= "<<e;
 }
 void print(int a,char b){
 	cout<<"\n 1st Integer= "<<a;
 	 cout<<"\n 2nd character= "<<b;
 }
 void print(char c,int d){
 	cout<<"\n 1st character= "<<c;
 	 cout<<"\n 2nd Integer= "<<d;
 }
