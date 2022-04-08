#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,mul;
	printf("Enter the first value");
	scanf("%d",&n1);
	printf("Enter the second value");
	scanf("%d",&n2);
	if (n1>n2)
	{
		int mul;
		mul=n1;
		n1=n2;
		n2=mul;
	}
	if((n2%n1)==0)
	{
		printf("They are Multiplied");
	}
	else
	{
	printf("They are not Multiplied");	
	}
	getch();
}