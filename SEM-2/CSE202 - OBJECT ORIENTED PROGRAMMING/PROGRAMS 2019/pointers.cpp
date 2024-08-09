#include<iostream>
using namespace std;
 
 main()
 {
 	int a=10;
 	char c='A';
 	float d=12.34;
 	void *p;
 	p=&a;
 	cout<<*((int*)p);
 	p=&c;
 	cout<<"\n";
 	cout<<*((char*)p);
 	p=&d;
 	cout<<"\n";
 	cout<<*((float*)p);
 	
 }
