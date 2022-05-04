#include<stdio.h>
#include<conio.h>
void profit();
void main()
{
	profit();
}
 void profit()
{
	float sp,cp,profit;
	printf("Enter the selling price");
	scanf("%f",&sp);
	printf("Enter the cost price");
	scanf("%f",&cp);
	profit= sp-cp;
	printf(" The profit  = %f",profit);
	getch();
}