#include<stdio.h>
main()
{
	int i,n,c;
	for (i=1;i<=20;i++)
	{
		c=0;
		for(n=1;n<=i;n++)
		{
			if (i%n==0)
			c++;
		}
			if (c==2)
			printf("%d \n",i);
		}
	}

