#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,sum=0;
	printf("Enter number ");
	scanf("%d",&n1);
	
	while(n1>=1)
	{
		n2=n1%10;
		
		sum=sum*10+n2;
		n1=n1/10;
	}
	printf("The reverse of number is %d ",sum);
}