#include<stdio.h>
#include<conio.h>
void main()
{
	float V,I,R;
	printf("Enter the value of current");
	scanf("%f",&I);
	printf("Enter the value of Resistance");
	scanf("%f",&R);
	V=I*R;
	printf(" The voltage is' = %f",V);
	getch();
}