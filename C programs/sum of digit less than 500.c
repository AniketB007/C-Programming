#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n1,n2,n3,n4,num1=0;
	printf("Enter the number less than 500  : ");
	scanf("%d",&num);
	n2=num;
	if(num<1 || num>500)
	{
		printf("You entered the value which is more than 500\n");
		printf("So ,please enter value which is less than 500\n");
	}
	else
	{
	
	while(num>0)
	{
		n1=num%10;
		num1=num1+n1;
		num=num/10;

	}
		printf("The sum of %d is %d ",n2,num1);
    }
}