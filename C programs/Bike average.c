#include<stdio.h>
#include<conio.h>
int main()
{
 int dist;
 float fuel, avg;
 printf("Enter the total distance in km");
 scanf("%d",&dist);
 printf("Enter the total fuel spent in lit");
 scanf("%f",&fuel);
 
 avg=dist/fuel;
 printf("The Average of Bike is %.2f km/lit",avg);
}