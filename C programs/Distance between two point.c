#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,dist;
	printf("Enter the location of 1st point");
	scanf("%d",&a);
	printf("Enter the location of 2nd point");
	scanf("%d",&b);
	dist= a-b;
	printf("The distance between this two point is %d",dist);
	
}