#include<stdio.h>
#include<conio.h>
int main()
{
	int n[4];
	int i;
	printf("Enter 5 numbers");
	for(i=0;i<=4;i++)
	{
		printf("\n n[%d]=",i);
		scanf("%d",&n[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("\n n[%d]=%d",i,n[i]);
	}
}