#include<stdio.h>
#include<conio.h>
void main()
{
	float length,breadth,AOR;
	printf("Enter the length");
	scanf("%f",&length);
	printf("Enter the breadth");
	scanf("%f",&breadth);
	AOR= length*breadth;
	printf(" The area of rectangle = %f",AOR);
	getch();
}