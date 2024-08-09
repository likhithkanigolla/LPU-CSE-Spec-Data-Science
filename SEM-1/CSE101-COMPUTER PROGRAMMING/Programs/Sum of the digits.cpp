#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("please enter the number");
	scanf("%d",n);
	while(n>0)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	printf("The sum of digits = %d",sum);
}
