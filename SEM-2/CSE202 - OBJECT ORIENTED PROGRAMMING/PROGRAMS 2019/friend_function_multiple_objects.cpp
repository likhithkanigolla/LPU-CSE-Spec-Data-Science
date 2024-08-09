#include<iostream>
using namespace std;
 class abc
 {
 	 private:
 	 	int a,b;
 	 	public:
 	 		void ip() 	{
 	 			cout<<"Enter two numbers ";
 	 			cin>>a>>b;  }
			  
		    void op() {
			cout<<"\n a="<<a<<"\n b="<<b;
			cout<<"\n";		
			}
			friend void sum(abc z,abc y);
 };
 main()  {
 	abc o1,o2;
 	o1.ip();
 	o2.ip();
 	o1.op();
 	o2.op();
 	sum(o1,o2);
 }
 void sum(abc z,abc y)
 {
 	cout<<"\n 1st sum is "<<z.a+y.a;
 	cout<<"\n 2nd sum is "<<z.b+y.b;
 }
 
 
 
