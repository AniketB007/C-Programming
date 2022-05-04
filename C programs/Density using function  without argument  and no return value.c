#include<stdio.h>
#include<conio.h>
void density();
void main()
{
	density();
}
void density()
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