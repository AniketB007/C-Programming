#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	printf("Enter the value of c");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("The value of 'a' is Maximum");
	}
	else
	if(b>a && b>c)
	{
		printf("The value of 'b' is Maximum");
	}
	else
	{
		printf("The value of 'c' is Maximum ");
	}
}