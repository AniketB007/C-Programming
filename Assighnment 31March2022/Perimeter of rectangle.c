#include<stdio.h>
#include<conio.h>
void main()
{
	float length,breadth,peri_meter;
	printf("Enter the length");
	scanf("%f",&length);
	printf("Enter the breadth");
	scanf("%f",&breadth);
	peri_meter=2*(length+breadth);
	printf(" The perimeter of rectangle = %f",peri_meter);
	getch();
}