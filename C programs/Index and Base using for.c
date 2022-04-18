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
	for(i=1;i<=b;i++)
	{
		pow=pow*a;
	}
	printf("The power is %d",pow);
	
}