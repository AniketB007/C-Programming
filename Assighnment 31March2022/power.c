#include<stdio.h>
#include<conio.h>
void main()
{
	float power,work,time;
	printf("Enter the  amount of work done");
	scanf("%f",&work);
	printf("Enter the time taken");
	scanf("%f",&time);

	power= work/time;
	printf(" The power = %f",power);
	getch();
}