#include<stdio.h>
int main()
{
	int n, number=0;
	printf("Enter the number.");
	scanf("%d",&n);
	while(n>0)
	{
	number=number*10+(n%10);
	n=n/10;	
	}
	printf("The reverse of the number is =%d", number);
}
