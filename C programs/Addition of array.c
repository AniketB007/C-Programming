#include<stdio.h>
#include<conio.h>
int main()
{
	int n[4];
	int i,sum=0;
	printf("Enter 5 numbers");
	for(i=0;i<=4;i++)
	{
		printf("\n n[%d]=",i);
		scanf("%d",&n[i]);
	
		sum=sum+n[i];
	}
		
		printf("The sum of these Array is %d",sum);
	
}