#include<iostream>
using namespace std;
void area (int);//square
void area (double);//circle
void area (int,int);//rectangle

main(){
	int x,y;
	double d;
	char z;
	cout<<"Which area you want to find?";
	cout<<"\nPress S for square";
	cout<<"\nPress C for circle";
	cout<<"\nPress R for rectangle";
	cout<<"\n";
	cin>>z;
	if(z=='S'||z=='s')
	{
	cout<<"Enter the length of side of the square ";
	cin>>x;
	area(x);
	
	}
	else if(z=='C'||z=='c')
	{
		cout<<"\nEnter the radius of the circle ";
		cin>>d;
		area(d);
	}
	else if(z=='R'||z=='r')
	{
		cout<<"\n Enter the length and breadth of rectangle ";
		cin>>x>>y;
		area(x,y);
	}
	else
	cout<<"\n Wrong Input . Please Try Again ";
	
}
void area(int x){
	cout<<"Area is "<<x*x<<" sq. units";
}
void area(double x){
	cout<<"Area is "<<3.14*x*x<<" sq. units";
}
void area(int x,int y){
	cout<<"Area is "<<x*y<<" sq. units";
}

