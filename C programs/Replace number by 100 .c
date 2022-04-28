#include<stdio.h>
#include<conio.h>
int main()
{
	int n[6];
	int i,n1;
	printf("Enter the 7 numbers\n");
	for(i=0;i<=6;i++)
	{
		
		scanf("%d",&n1);
		if(n1>0)
		{
			n[i]=n1;
			
		}
		else
		{
			n[i]=100;
			
		}
		
	}
	    
	printf("Values are :\n");
	for(i=0;i<7;i++)
	{
		printf("n[%d]=%d\n",i,n[i]);
	}

}  