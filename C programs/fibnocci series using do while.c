#include<stdio.h>
#include<conio.h>
void main()
{
int r,a,b,c; 
a=0;
b=1;
printf("Enter r");
scanf("%d",&r);
printf("%d\n %d\n",a,b);
c=0;
do
{
	c=a+b;
	if(c<=r)
	{
		printf("%d\n",c);
		
	}
	a=b;
	b=c;
	
}while(c<=r);

getch();	
}