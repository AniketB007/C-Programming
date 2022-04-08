#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3,n4,n5,ores=0,eres=0;
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
	
	if(n1%2==0)
	{
	eres=eres+n1;
	}
	else
	{
	ores=ores+n1;
	}
  	if(n2%2==0)
	{
	eres=eres+n2;
	}
	else
	{
	ores=ores+n2;
	}
	if(n3%2==0)
	{
	eres=eres+n3;
	}
	else
	{
	ores=ores+n3;
	}
	if(n4%2==0)
	{
	eres=eres+n4;
	}
	else
	{
	ores=ores+n4;
	}
	if(n5%2==0)
	{
	eres=eres+n5;
	}
	else
	{
	ores=ores+n5;
	}
	printf("The sum of all Even values is %d",eres);
}