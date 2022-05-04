#include<stdio.h>
#include<conio.h>
void conv();
void main()
{
	conv();
}
 void conv()
{    
    int cm;
	float inch;
	//1 inch=2.54 cm
	printf("Enter the distance in cm  ");
	scanf("%d",&cm);
	inch=cm/2.54;
	printf("The distance of %d cm = %f inch",cm,inch);
}