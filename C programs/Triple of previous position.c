#include<stdio.h>
#include<conio.h>
int main()
{
	int n[6];
	int i,n1;
	printf("Enter the number ");
	scanf("%d",&n1);
	for(i=0;i<=6;i++)
	{
		n[i]=n1;
		n1=3*n1;
		
	}
	for(i=0;i<7;i++)
	{
		printf("n[%d]=%d\n",i,n[i]);
	}
}