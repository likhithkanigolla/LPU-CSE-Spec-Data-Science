#include<iostream>
using namespace std;
 class abc
 {
 	 private:
 	 	int a,b;
 	 	public:
 	 		void ip()
 	 		{
 	 			cout<<"Enter two numbers ";
 	 			cin>>a>>b;
			  }
			  
		    void op()
		{
			cout<<"\n a="<<a<<"\n b="<<b;		}
			
			inline void sum();
 };
 main()
 {
 	abc o1;
 	o1.ip();
 	o1.op();
 	o1.sum();
 }
 void abc::sum()
 {
 	cout<<"\n sum is "<<a+b;
 }
 
