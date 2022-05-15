/*Write a C program to create a new array containing the middle elements from the two given arrays of integers, each length 5*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1[5],n2[5],n3[2];
	printf("Enter the  element of 1st array \n");
	for(int i=0;i<5;i++)
	{
		printf("Enter the element  ");
		scanf("%d",&n1[i]);
	}
	
	printf("\n");
	printf("Enter the  element of 2nd array  \n");
	for(int i=0;i<5;i++)
	{
		printf("Enter the element  ");
		scanf("%d",&n2[i]);
	}
	n3[0]=n1[2];
	n3[1]=n2[2];
	printf("New array of middle element is  ");
	for(int i=0;i<2;i++)
	{
		printf(" %d ",n3[i]);
	}
}