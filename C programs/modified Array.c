#include<stdio.h>
#include<conio.h>
int main()
{
	int n[5];
	int i,temp;
	printf("Enter the 5 numbers\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
		
	}
	for(i=0;i<5;i++)
	{
		if(i<(5/2))
	{
		temp=n[i];
		n[i]=n[5-(i+1)];
		n[5-(i+1)]=temp;
	}
	}
	for(i=0;i<5;i++)
	{
		printf("n[%d]=%d\n", i,n[i]);
	}
}