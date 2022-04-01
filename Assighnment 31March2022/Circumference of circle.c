#include<stdio.h>
#include<conio.h>
void main()
{
	float circum_ference,radius,pi=3.14;
	printf("Enter the value of radius");
	scanf("%f",&radius);
	circum_ference= 2*pi*radius;
	printf(" The circumference of circle = %f",circum_ference);
	getch();
}