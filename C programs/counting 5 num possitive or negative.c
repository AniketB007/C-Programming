#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3,n4,n5,poss=0,nega=0;
	printf("Enter the 1st number");
	scanf("%d",&n1);
	printf("Enter the 2nd number");
	scanf("%d",&n2);
	printf("Enter the 3rd number");
	scanf("%d",&n3);
	printf("Enter the 4th number");
	scanf("%d",&n4);
	printf("Enter the 5th number");
	scanf("%d",&n5);
	if(n1>0)
	{
		poss=poss+1;
	}
	else
	if(n1<0)
	{
		nega=nega+1;
	}
	
	if(n2>0)
	{
		poss=poss+1;
	}
	else
	if(n2<0)
	{
		nega=nega+1;
	}
	
	if(n3>0)
	{
		poss=poss+1;
	}
	else
	if(n3<0)
	{
		nega=nega+1;
	}
	
	if(n4>0)
	{
		poss=poss+1;
	}
	else
	if(n4<0)
	{
		nega=nega+1;
	}
	
	if(n5>0)
	{
		poss=poss+1;
	}
	else
	if(n5<0)
	{
		nega=nega+1;
	}
	printf("The total possitive numbers is %d",poss);
	printf("\nThe total negative numbers is %d",nega);
}