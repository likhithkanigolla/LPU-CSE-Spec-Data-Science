#include<stdio.h>
main()
{
	int n,i,fact=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		fact++;
	}
	if (fact==2)
	{
		printf("Prime Number");
	}
	else
	printf("Not Prime Number");
}
