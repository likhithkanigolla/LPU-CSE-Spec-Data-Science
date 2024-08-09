/*declaration  swap(*x,*y);
main()
{
	display value of a and b before swap
	
	call swap with address a and b variable
	
	display value of a and b after swap
}

void definition of swap(*x,*y)*/

#include<iostream>
using namespace std;

void swap(int*x,int*y);

main(){
	
	int a,b;
	cout<<"Enter the numbers you want to swap ";
	cin>>a>>b;
	cout<<"\n The values before swapping are";
	cout<<" a="<<a<<" b="<<b;
	
	swap( &a, &b);
	cout<<"\n The values after swapping are";
	cout<<" a="<<a<<" b="<<b;
	
}
void swap(int*x,int*y){
	int c;
	c=*x;
	*x=*y;
	*y=c;
}



