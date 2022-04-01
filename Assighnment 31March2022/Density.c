#include<stdio.h>
#include<conio.h>
void main()
{
	float density,mass,volume;
	printf("Enter the mass");
	scanf("%f",&mass);
	printf("Enter the volume");
	scanf("%f",&volume);
	density=mass*volume;
	printf(" The speed  = %f",density);
	getch();
}