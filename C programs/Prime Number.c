#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,i,j=0;
	
	printf("Enter the number ");
	scanf("%d",&n1);
	i=2;
	while(i<n1)
	{
		if(n1%i==0)
		{
			j=1;
		}
		i=i+1;
	}
		if(j==0)
		{
			printf("The number %d is a Prime Number",n1);
		}
		else
		{
			printf("The number  %d is Not a prime Number",n1);
		}

}