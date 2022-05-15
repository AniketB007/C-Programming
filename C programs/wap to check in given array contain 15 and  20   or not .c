/*Write a C program to check if a given array of integers and length 2, contains 15 or 20.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n[2],x=0;
	
	for(i=0;i<2;i++)
	{
		printf("Enter the element of array ");
		scanf("%d",&n[i]);
	}
	
	printf("\n");
	
	for( j=0;j<2;j++)
	{
		if(n[j]==15 || n[j]==20)
		{
			printf("Yes it contain 15 or 20");
			x=1;
			break ;
		}
	}
	if(x==0)
	{
		printf("Sorry it does not contain 15 or 20 ");
	}
	
}