#include<stdio.h>
#include<conio.h>
void area();
void main()
{
  area();	
	
}

void area()
{
	float area,side;
	printf("Enter the value of side");
	scanf("%f",&side);
	area=side*side;
	printf(" The area of square = %f",area);
	getch();
}