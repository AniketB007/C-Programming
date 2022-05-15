//Write a C program to check a given array of integers, length 3 and create a new array. If there is a 5 in the given array immediately followed by a 7 then set 7 to 1.


#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n[3];
	
	for(i=0;i<3;i++)
	{
		printf("Enter the element of array  ");
		scanf("%d",&n[i]);	
	}
	for(i=0;i<3;i++)
	{
		if(n[i]==5 && n[i+1]==7)
		{
		n[i+1]=1;
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d ",n[i]);	
	}
}