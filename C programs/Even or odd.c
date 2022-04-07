#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n;
	printf("Enter the number");
	scanf("%d",&n1);
	n=n1%2;
	if(n==0)
	{
		printf("The given number is Even");
	}
	else
	{
		printf("The given number is odd");
	}
}