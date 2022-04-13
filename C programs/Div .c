#include<stdio.h>
#include<conio.h>
int main()
{
	float x,y,div;
	printf("Enter the 1st number");
	scanf("%f",&x);
	printf("Enter the 2nd number");
	scanf("%f",&y);
	if(y!=0)
	 
	{
		div=x/y;
		printf("The division of these numbers is %.1f",div);
	}
	else
	{
		printf("The division of these numbers is NOT possible");
	}
}
	