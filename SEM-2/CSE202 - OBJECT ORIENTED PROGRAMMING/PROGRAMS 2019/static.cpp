#include<iostream>
using namespace std;
class student {
	private:
		char name[30], 
		addr[30];
		static int reg;
		int Rno;
		
		public:
		void ip()  	{
			cout<<"Enter the name of the student ";
			cin>>name;
			cout<<"\n Enter the address";
			cin>>addr;
		}
		void op() 	{
			cout<<"\n the details of students are";
			cout<<"\nName-"<<name;
			cout<<"\nAddress-"<<addr;
			Rno=++reg;
			cout<<"\nReg. No-"<<Rno;
					}
					
					static int getreg()
					{   ++Rno;
						return reg;
					}
			};
			
			int student::reg=11900000;
 
 main()
 { 
 	student s1,s2,s3;
 cout<<"\n Range="	<<student::getreg() ;
 	s1.ip();
 	s2.ip();
 	s3.ip();
   
 	
 	s1.op();
 	s2.op();
 	s3.op();
 	
 	 cout<<"\n Range="	<<student::getreg() ;
 }
 
