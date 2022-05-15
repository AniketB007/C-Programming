//check if it is possible to add two integers to get the third integer from three given integers

#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter the 1st Number ");
	scanf("%d",&n1);
	printf("Enter the 2nd Number ");
	scanf("%d",&n2);
	printf("Enter the 3rd Number ");
	scanf("%d",&n3);
	
	if(n1==n2+n3 || n2==n1+n3 || n3==n1+n2)
	{
		printf("Possible");
	}
	else
	{
		printf("NOT Possible");
	}
}