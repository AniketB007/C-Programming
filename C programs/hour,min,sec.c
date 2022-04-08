#include<stdio.h>
#include<conio.h>
int main()
{
	int N, hour,min,sec;
	printf("Enter the number for conversion");
	scanf("%d",&N);
	
	hour=N/3600;
	printf("\nThe total hours is %d",hour);
	
	min = (N -(3600*hour))/60;
	printf("\nThe total minutes is %d",min);

	sec = (N -(3600*hour)-(min*60));
	printf("\nThe total seconds is %d",sec);

	
	
}