#include<stdio.h>
int main()
{
	int n,rev=0,copyno;
	printf("Enter the number.");
	scanf("%d",&n);
	copyno=n;
	while(n>0)
	{
		rev=rev*10+(n%10);
		n=n/10;
	}
	if(copyno==rev)
	{
		printf("The number is palindromic number");
	}
	else 
	printf("Its not palindrom");
}
