#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n[10];
	int even=0,odd=0;
	printf("Enter the 10 numbers\n");
	for (i=0;i<=9;i++)
	{
		
		printf("\n n[%d]=",i);
		scanf("%d",&n[i]);
		
		if(n[i]%2 == 0)
		{
			even=even+1;
		}
		else
		{
			odd=odd+1 ;
		}
		
	}
		printf("The even values in these array = %d \n ",even);
		
		printf("The odd values in these array   = %d ",odd);
}