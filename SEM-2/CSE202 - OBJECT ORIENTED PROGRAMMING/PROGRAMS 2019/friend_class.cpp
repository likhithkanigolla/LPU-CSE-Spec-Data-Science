#include<iostream>
using namespace std;
 class abc
 {
 	private:
 	 	int a,b;
 	public:
 		void ip() ;
	    void op();
	 friend class demo;
 };
 
 class demo
 { 
 public:
 void sum(abc z);
 };

 main()  {
 	abc o1;
 	o1.ip();
 	o1.op();
 	
 	demo d;
 	
 	d.sum(o1);
 }
 
 void abc::ip() 	
 { cout<<"Enter two numbers ";
   cin>>a>>b;  }
		  
void abc::op() {
   cout<<"\n a="<<a<<"\n b="<<b;
   cout<<"\n";		
	}
	
 void demo::sum(abc z)
 { 	cout<<"\n 1st sum is "<<z.a+z.b;
 	
 }
 
