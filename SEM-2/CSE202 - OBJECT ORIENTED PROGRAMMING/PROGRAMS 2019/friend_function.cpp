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
			}
			friend void sum(abc z);
 };
 main()  {
 	abc o1;
 	o1.ip();
 	o1.op();
 	sum(o1);
 }
 void sum(abc z)
 {
 	cout<<"\n sum is "<<z.a+z.b;
 }
 
