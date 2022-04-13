#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n1,n2,num1=0;
	printf("Enter the number ");
	scanf("%d",&num);
	n2=num;
	while(num>0)
	{
		n1=num%10;
		num1=num1+n1;
		num=num/10;

	}
		printf("The sum of %d is %d ",n2,num1);

}