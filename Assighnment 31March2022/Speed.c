#include<stdio.h>
#include<conio.h>
void main()
{
	float speed,dist,time;
	printf("Enter the distance");
	scanf("%f",&dist);
	printf("Enter the time");
	scanf("%f",&time);
	speed= dist/time;
	printf(" The speed  = %f",speed);
	getch();
}