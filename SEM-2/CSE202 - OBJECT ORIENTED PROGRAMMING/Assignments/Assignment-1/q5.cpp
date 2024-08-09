#include<iostream>
using namespace std;
class bank
{
	public:
	int accno;
	int amount;
	char acctype[20];
	public:void get()
	{
		cout<<"enter accunt number";
		cin>>accno;
		cout<<endl<<"enter amount ";
		cin>>amount;
		cout<<endl<<"enter account type";
		cin>>acctype;
		}
		public:void put()
		{
			cout<<"acc number "<<accno<<endl<<"amount "<<amount<<endl<<"acc type "<<acctype;
		}
		//friend void puts(bank s);
		
	};
	/* void puts(bank s)
	{
		cout<<"acc number "<<s.accno<<endl<<"amount "<<s.amount<<endl<<"acc type "<<s.acctype;
	}*/
	main()
	{ bank s;
	int &b=s;
		b.get();
		b.put();
	}
