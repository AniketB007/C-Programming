#include<stdio.h>
#include<conio.h>
int main()
{
 int N, day,month,year;
 printf("Enter the number ");
 scanf("%d",&N);
 year=N/365;
 printf("\nThe total year is %d",year);
 N=N-(365*year);
 month=N/30;
 printf("\nThe total month is %d",month);
 day=N-(month*30);
 printf("\nThe total days is %d", day);
}