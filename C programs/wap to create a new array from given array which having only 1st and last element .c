//Write a C program to create a new array taking the first and last elements of a given array of integers and length one or more*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n1[5],n2[2];
	
	for(i=0;i<5;i++)
	{
		printf("Enter the element of 1st array ");
		scanf("%d",&n1[i]);
	}
	
	printf("\n");
	
	n2[0]=n1[0];
	n2[1]=n1[4];
	
	printf("The new array is ");
	for(int j=0;j<2;j++)
	{
		printf("%d ",n2[j]);
	}
	
}