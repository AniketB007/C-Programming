#include<stdio.h>
#include<conio.h>
void main()
{
	float weight,g,m;
	printf("Enter the  mass of the body");
	scanf("%f",&m);
	printf("Enter the  value of acceleration due to gravity");
	scanf("%f",&g);

	weight= m*g;
	printf(" The force applied = %f",weight);
	getch();
}