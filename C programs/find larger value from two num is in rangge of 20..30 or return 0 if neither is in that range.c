#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	printf("Enter 1st Number ");
	scanf("%d",&n1);
	printf("Enter 2nd Number ");
	scanf("%d",&n2);
	
	if(n1>=20 && n1<=30 || n2>=20 && n2<=30 )
	{
		printf(" The given number is in  Range\n");
		if(n1>n2)
		{
			printf("1st Number is Greater\n");
		}
		else
		{
			printf("2nd Number is Greater \n");
		}
	}
	else
	{
		printf("False\n");
	}
	
	
}