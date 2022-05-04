#include<stdio.h>
#include<conio.h>
void main()
{
  cal();	
	
}
void cal()
{
	int side;
	printf("Enter the value of side");
	scanf("%d",&side);
	area(side);
}

void area(int x)
{
     int res;
	res=x*x;
	printf(" The area of square = %d",res);
	getch();
}