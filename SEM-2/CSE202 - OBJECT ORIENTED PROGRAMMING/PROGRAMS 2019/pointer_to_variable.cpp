#include<iostream>
using namespace std;
main(){
	int a=10;
	char B='f';
	int *p;
	char *q;
	
	p=&a;
	q=&B;
	
	cout<<*p<<" "<<*q<<endl;
	int **z;
	z=&p;
	int ***y;
	y=&z;
	cout<<**z<<" "<<***y<<endl;
	
}
