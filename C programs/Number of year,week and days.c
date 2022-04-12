#include<stdio.h>
#include<conio.h>
void main()
{
	int d1,y,w,d2;
	printf("Enter the  specific number :");
	scanf("%d",&d1);
	
	y=d1/365;
	printf("The number of years : %d\n",y);
	
	w=(d1%365)/7;
	printf("Number of weeks : %d\n",w);
	
	d2=d1-((y*365)+(w*7));
	printf("The number of days = %d\n",d2);
}


