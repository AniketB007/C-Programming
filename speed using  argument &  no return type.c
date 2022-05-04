#include<stdio.h>
#include<conio.h>
void data();
void speed();

void main()
{
	data();
}
void data()
{
	int d,t;
	printf("Enter the distance ");
	scanf("%d",&d);
	printf("Enter the time ");
	speed(d,t);
}
      void speed(int x,int y)
{
	int s;
	s=x/y ;
	printf(" The speed  = %d",s);
	
}