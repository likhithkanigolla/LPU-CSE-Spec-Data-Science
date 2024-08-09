#include<stdio.h>
void swap(int , int);
main()
{
	int a,b;
	printf("Enter the number");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("The numbers are - %d, %d",a,b);
}
void swap(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf(" the values are - %d, %d",x,y);
}
