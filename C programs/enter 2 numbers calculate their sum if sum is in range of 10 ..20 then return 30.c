#include<stdio.h>
#include<conio.h>
void main()
{
	int s,n1,n2,n=30;
	printf("Enter  the 1st Number ");
	scanf("%d",&n1);
	printf("Enter 2nd Number ");
	scanf("%d",&n2);
	
	s=n1+n2;
	
	if(s>=10 && s<=20)
	{
		printf("%d",30);
	}
	else
	{
		printf("Number is not in range");
	}
	
}         