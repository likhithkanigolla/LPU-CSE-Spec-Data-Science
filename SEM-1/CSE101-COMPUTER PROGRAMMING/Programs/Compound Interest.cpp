#include <stdio.h>
#include <math.h>
int main()
{
	float p,r,n,t;
	double a;
	printf("Enter the principal");
	scanf("%f",&p);
	printf("enter the time");
	scanf("%f",&t);
	printf("Enter the rate");
	scanf("%f",&r);
	printf("Enter the number of times Interest is compounded");
	scanf("%f",&n);
	a=p*pow(1+r,t);
	printf("The final amount is =%f",a);
	
	
}
