#include<stdio.h>
#include<conio.h>
void main()
{
	int s,d,n1,n2;
	printf("Enter the 1st Number ");
	scanf("%d",&n1);
	printf("Enter  the 2nd Number ");
	scanf("%d",&n2);
	
	s=n1+n2;
	
	d=n1-n2;
	
	if(n1==5 || n2==5 || s==5 ||d==5)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}