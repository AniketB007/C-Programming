#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,i,j=0;
	
	printf("Enter Any Number :");
	scanf("%d",&n1);
	
	i=2;
	do
	{
		if(n1%i==0)
		{
			j=1;
			break;
		}
		i=i+1;
	}while(i<n1);
		if(j==0)
		{
			printf("The number %d is a Prime Number",n1);
		}
		else
		{
			printf("The number  %d is Not a prime Number",n1);
		}

}