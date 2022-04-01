#include<stdio.h>
#include<conio.h>
void main()
{
	float p,n,r,SI;
	printf("Enter the principal amount");
	scanf("%f",&p);
	printf("Enter the number of days");
	scanf("%f",&n);
	printf("Enter the rate of intrest");
	scanf("%f",&r);
	SI= (p*n*r)/100;
	printf(" The simple Intrest = %f",SI);
	getch();
}