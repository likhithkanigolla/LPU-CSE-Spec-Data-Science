#include<stdio.h>
int main()
{
	int m;
	printf("Enter your marks");
	scanf ("%d",&m);
	if (m>=90 && m <=100)
	{
		printf("You have secured Grade A");
	}
	else if (m>=80 && m<=89)
	{
		printf("You have secured Grade B");
	}
	else if (m>=70 && m<=79)
	{
		printf("You have secured Grade C");
	}
	else if (m>=60 && m<=69)
	{
		printf("You have secured Grade D");
	}
	else
	{
		printf("You have failed.");
	}
}
