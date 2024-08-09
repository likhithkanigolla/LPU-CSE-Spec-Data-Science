#include<stdio.h>
int fact(int);
main()
{
	int n,f;
	printf("Enter the no");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial is = %d",f);
}
int fact(int x)
{
	if (x==1)
	return 1;
	else
	return(x*fact(x-1));
}
