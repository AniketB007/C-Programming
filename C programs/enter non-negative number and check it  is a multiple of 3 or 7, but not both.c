
//enter non-negative number and check it  is a multiple of 3 or 7, but not both

#include<stdio.h>
#include<conio.h>
void main()
{
	int n1;
	printf("Enter any Number");
	scanf("%d",&n1);
	
	if(n1%3==0 && n1%7==0)
	{
		printf(" The number is  multiple Of 3 or 7");
	}
	else
	if(n1%3==0)
	{
		printf(" The number is Multiple Of 3");
	}
	else
	if(n1%7==0)
	{
		printf("The number is Multiple Of 7");
	}
	else
	{
		printf(" The number is NOT Multiple Of 3 or 7");
	}
}