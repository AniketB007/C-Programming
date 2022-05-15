
   
//Write a C program to rotate the elements of a given array of integers (length 4) in left direction and return the new array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n[4];
	
	for(i=0;i<4;i++)
	{
		printf("Enter the elements of array ");
		scanf("%d",&n[i]);
			
	}
	  printf("The new array is ");
	for(i=0;i<4;i++)
	{
		if(i==0)
		{
			j=n[i];
		}
		
		n[i]=n[i+1];
		
		if(i==3)
		{
			n[i]= j;
		}
		
	}
	for(i=0;i<4;i++)
	{
	
		printf(" %d ", n[i]);
	}
	
	
	
}