#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,sum=0,rev,n2;
	printf("Enter the number ");
	scanf("%d",&n1);
	n2=n1;
	while(n1>0)    
	{    
	rev=n1%10;    
	
	sum=sum+(rev*rev*rev);
	
	n1=n1/10;    
	}
	if(n2==sum)
	{
	printf(" The number is Armstrong");
    }
    else
    {
    	printf("The number is NOT armstrong");
	}
}