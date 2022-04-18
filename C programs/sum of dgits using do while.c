#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n1,n2,n3,n4,num1=0;
	printf("Enter the number ");
	scanf("%d",&num);
	n2=num;
	do
	{
		n1=num%10;
		num1=num1+n1;
		num=num/10;

	}	while(num>0);
		printf("The sum of %d is %d ",n2,num1);

}