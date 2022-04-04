#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter the value of a");
	scanf("%d",&a);
	b=a%4;
	if(b==0)
	{
	printf("The number is divisible by 4");
	}
	else
	{
		printf("The number is not divisible by 4");
	}
}
