#include<stdio.h>
#include<conio.h>
void main()
{
	int n1;
	printf("Enter the number");
	scanf("%d",&n1);
	if(n1>>0)
	{
		printf("The given number is Possitve");
	}
	else
	{
		printf("The given number is Negative");
	}
}