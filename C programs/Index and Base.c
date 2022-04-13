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
	while(i<=b)
	{
		pow=pow*a;
		i++;
	}
	printf("The power is %d",pow);
	
}