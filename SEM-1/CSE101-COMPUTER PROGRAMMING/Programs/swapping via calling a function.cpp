#include<stdio.h>
void swap(int*,int*);
main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d", &a,&b);
	swap(&a,&b);
	printf("Values in main function are - %d, %d",a,b);
}
void swap(int*x,int*y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("Values in swap function are - %d, %d",*x,*y);
}
