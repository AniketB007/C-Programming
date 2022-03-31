#include<stdio.h>
#include<conio.h>
void main()
{
	int mass,acceleration,force;
	printf("Enter the value of mass and acceleration");
	scanf("%d %d",&mass,&acceleration);
	force = mass*acceleration;
	printf(" The force applied = %d",force);
	getch();
}