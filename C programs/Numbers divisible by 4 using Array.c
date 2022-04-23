#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n[5];
	printf("Enter 5 numbers");
	for(i=0;i<=4;i++)
	{
		printf("\n n[%d]=",i);
		scanf("%d",&n[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(n[i]%4==0)
		{
			printf("\n The number is divisible by 4 is %d\n",n[i]);
		}
	}
}