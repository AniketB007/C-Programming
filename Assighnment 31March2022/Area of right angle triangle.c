#include<stdio.h>
#include<conio.h>
void main()
{
	float height,breadth,AORAT;
	printf("Enter the breadth");
	scanf("%f",&breadth);
	printf("Enter the height");
	scanf("%f",&height);
	AORAT= 0.5*breadth*height;
	printf(" The area of right angle triangle = %f",AORAT);
	getch();
}