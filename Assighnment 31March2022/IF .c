#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r;
	printf("Enter the value of a");
	scanf("%d",&a);
	r= a%4;
	if(r==0)
	{
		printf("The number is divisible by 4");
	}
	if(r!=0)
	{
		printf("The number is not divisible by 4");
	}
}