#include<stdio.h>
#include<conio.h>
void profit();
void cal();
void main()
{
	profit();
}
 void profit()
{
	int sp,cp;
	printf("Enter the selling price");
	scanf("%d",&sp);
	printf("Enter the cost price");
	scanf("%d",&cp);
	cal(sp,cp);
	
	}
	void cal(int x,int y)
   {
	int profit;

	profit= x-y;
	printf(" The profit  = %d ",profit);
  	
}