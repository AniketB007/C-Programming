#include<stdio.h> 
#include<conio.h>

int main()
{
	float w1,w2,p1,p2,avg;
	printf("Enter the number of purchased of 1st  item");
	scanf("%f",&p1);
	printf("Enter the weight of purchased of 1st item");
	scanf("%f",&w1);
    printf("Enter the number of purchased of 2nd  item");
	scanf("%f",&p2);
	printf("Enter the weight of purchased of 2nd item");
	scanf("%f",&w2);
	avg=((w1*p1)+(w2*p2))/(p1+p2);
	printf("The average of two items is %f",avg);
	
}