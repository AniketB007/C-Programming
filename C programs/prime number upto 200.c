#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,j,n2;
	for(int i=0;i<200;i++)
	{
	n2=0;
	j=2;
	n1=i;
	
	while(j<n1)
	{
		if(n1%j==0)
		{
			n2=1;
			break;
		}
		j=j+1;
	}
		if(n2==0)
		{
			printf("%d \n",n1);
		}
		

}}