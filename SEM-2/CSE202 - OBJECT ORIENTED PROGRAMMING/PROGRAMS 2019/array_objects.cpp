#include <iostream>
using namespace std;

class Student
{
	char name[10];
	int marks;
	public:
		void getName()
		{
			cin>>name;
		}
		void getMarks()
		{
			cin >> marks;
		}
		void displayInfo()
		{
			cout << "Name : " << name << endl;
			cout << "Marks : " << marks << endl;
		}
};

int main()
{
	Student st[5];
	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 << endl;
		cout << "Enter name" << endl;
		st[i].getName();
		cout << "Enter marks" << endl;
		st[i].getMarks();
	}

	for( int i=0; i<5; i++ )
	{
		cout << "\n Student " << i + 1 << endl;
		st[i].displayInfo();
	}
	return 0;
}
