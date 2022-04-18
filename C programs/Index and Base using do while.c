#include<stdio.h>
#include<conio.h>
int main()
{ 
   int a,b,i,pow=1;
	printf("Enter the value of base");
	scanf("%d",&a);
	printf("Enter the value of index");
	scanf("%d",&b);
	i=1;
	do
	{
		pow=pow*a;
		i++;
	}while(i<=b);
	printf("The power is %d",pow);
	
}