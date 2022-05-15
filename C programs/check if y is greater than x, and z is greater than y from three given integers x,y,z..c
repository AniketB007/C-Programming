//check if y is greater than x, and z is greater than y from three given integers x,y,z.

#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	printf("Enter the value of X ");
	scanf("%d",&x);
	printf("Enter the value of Y ");
	scanf("%d",&y);
	printf("Enter  the value of Z ");
	scanf("%d",&z);
	
	if(y>x)
	{
		printf("Y is Greater than X\n");
	}
	if(z>y)
	{
		printf("Z is Greater than Y");
	}
	
}