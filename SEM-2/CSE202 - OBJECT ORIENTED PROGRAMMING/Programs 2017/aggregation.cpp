#include<iostream.h>
class Date
{
	public:
		int month, day, year;

	     Date(int m, int d, int y)
	     {
		month = m;
		day = d;
		year= y;
	     }
};

main()
{
    Date s(20,30,40);
    //s.display();

}
