#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,f=1;
	printf("Enter the number ");
	scanf("%d",&num);
	i=1;
	do
	{
		f=f*i;
		i++;
	
	}while(i<=num);
	printf("The Factorial of %d  is %d\n",num,f);
}