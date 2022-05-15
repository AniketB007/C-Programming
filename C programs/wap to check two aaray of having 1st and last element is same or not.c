//Write a C program to check two given arrays of integers of length 1 or more and return true if they have the same first element or they have the same last element.


#include<stdio.h>
#include<conio.h>


void main()
{
	int n,x,i;
	printf("Enter the  size of 1st Array \n");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element of 1st array");
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the size of 2nd Array \n");
	scanf("%d",&x);
	
	int b[x];
	for(i=0;i<x;i++)
	{
		printf("Enter elememt  of 2nd array ");
		scanf("%d",&b[i]);
	}
	
	if(a[0]==b[0] && a[n-1]==b[x-1])
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
}