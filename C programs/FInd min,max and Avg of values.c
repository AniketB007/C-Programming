#include<stdio.h>
#include<conio.h>
void main() 
{
	int n1,i=0,sum=0,M,m;
	float Avg;
	printf("Enter Positive integers ");
	scanf("%d",&n1);
	if(n1<=0)
	{
		printf("No possitive number entered");
	}
	else
	{
		M=n1;
		m=n1;	
		while(n1>0)
		{
			i=i+1;
			sum=sum+n1;
		if(n1>M)
		{
			M=n1;
		}
		if(n1<m)
		{
			m=n1;
		}
		printf("Enter Any Positive integer ");
		scanf("%d",&n1);
		}
	}
	Avg=sum/i;
	printf("The Maximum value is %d \n",M);
	printf("The Minimum Value is %d \n",m);
	printf(" The Average is %.2f \n",Avg);
	printf("Total Positive Integer is = %d \n",i);
	
}