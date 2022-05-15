/*Write a C program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is same.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,r1,r2;
	printf("Enter the  1st number ");
	scanf("%d",&a);
	printf("Enter the  2nd number ");
	scanf("%d",&b);
	printf("Enter the  3rd number  ");
	scanf("%d",&c);
	
	if(a>b)
	{
		r1=a-b;	
	}
	else
	{
		r1=b-a;
	}
	if(b>c)
	{
		r2=b-c;
	}
	else
	{
		r2=c-b;
	}
	
	if(r1==r2)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}