#include<stdio.h>
#include<conio.h>
int main()
{
	int n[5];
	int i,n1;
	printf("Enter the 5 numbers\n ");

	for(i=0;i<5;i++)
	{
	    scanf("%d",&n[i]);
		
		
	}
	for(i=0;i<5;i++)
	{
		if(n[i]<5)
		{
		
		printf("n[%d]=%d\n",i,n[i]);
	    }
	}
}