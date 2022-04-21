#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,f=1;
	printf("Enter the number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f=f*i;
	
	}
	printf("The Factorial of %d  is %d\n",num,f);
}