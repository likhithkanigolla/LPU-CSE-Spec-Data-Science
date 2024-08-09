#include<stdio.h>
void multiplication(int,int,int);
main()
{
	int a,b,c,e;
	printf("Enter the numbers");
	scanf("%d %d %d",&a,&b,&c);
	multiplication (a,b,c);
}
void multiplication(int a,int b,int c)
{
	int e=a*b*c;
	printf("Product is %d",e );
}

