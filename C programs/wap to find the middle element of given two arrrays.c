//Write a C program to create a new array containing the middle elements from  the two given arrays of integers, each length 5.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n1[5],n2[5],n3[2];
	
	for(i=0;i<5;i++)
	{
		printf("Enter the element of 1st array ");
		scanf("%d",&n1[i]);
	}
	
	printf("\n");

	for(i=0;i<5;i++)
	{
		printf("Enter the  element of 2nd array ");
		scanf("%d",&n2[i]);
	}
	
	n3[0]=n1[2];
	n3[1]=n2[2];
	
	printf("\n\nThe middle elements of array's is   ");
	for(int j=0;j<2;j++)
	{
		printf("  %d  ",n3[j]);
	}
	
}