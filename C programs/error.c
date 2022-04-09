#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	if (n>=0 && n<=80)
	{
		printf("There number is in range");
	}
	else
	if(n<0)
	{
		printf("There is an error");
	}
	else 
	{
		printf("The number is outside the range");
	}
}