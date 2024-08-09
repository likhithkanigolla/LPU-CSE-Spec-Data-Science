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
			void sum(abc z)
 {
 	cout<<"\n 1st sum is "<<a+z.a;
 	cout<<"\n 2nd sum is "<<b+z.b;
 }
 };
 main()  {
 	abc o1,o2;
 	o1.ip();
 	o2.ip();
 	o1.op();
 	o2.op();
 	o1.sum(o2);
 }
 
 
 
 
