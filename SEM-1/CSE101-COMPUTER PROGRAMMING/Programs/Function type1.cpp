#include<stdio.h>
void multiplication(void);
main()
{
	multiplication();
}
void multiplication()
{
	int a,b,c,e;
	printf("Enter the numbers");
	scanf("%d %d %d %d",&a,&b,&c);
	e=a*b*c;
	printf("Product is = %d",e);
}
