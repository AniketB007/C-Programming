#include<stdio.h>
#include<conio.h>

void main()
{
	float sp,cp,loss;
	printf("Enter the cost price");
	scanf("%f",&cp);
	printf("Enter the selling price");
	scanf("%f",&sp);
	loss= cp-sp;
	printf(" The loss  = %f",loss);
	getch();
}