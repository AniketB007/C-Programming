#include<stdio.h>
#include<conio.h>
void main()
{
	float area,radius,pi=3.14;
	printf("Enter the value of radius");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf(" The area of circle = %f",area);
	getch();
}