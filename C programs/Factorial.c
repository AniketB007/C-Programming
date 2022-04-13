#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,f=1;
	printf("Enter the number ");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		f=f*i;
		i++;
	
	}
	printf("The Factorial of the number is %d",f);
}