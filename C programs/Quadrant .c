#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("Enter the 1st co-ordinator");
	scanf("%d",&x);
	printf("Enter the 2nd co-ordinator");
	scanf("%d",&y);
	if(x>0 && y>0)
	{
		printf("The Co-ordinators are in 1st Quadrant");	
	}
	else
	if(x>0 && y<0)
	{
	printf("The Co-ordinators are in 2nd Quadrant");

	}
	else
	if(x<0 && y<0)
	{
	printf("The Co-ordinators are in 3rd Quadrant");

	}
	else 
	if(x<0 && y>0)
	{
	printf("The Co-ordinators are in 4th Quadrant");

	}
	getch();
}