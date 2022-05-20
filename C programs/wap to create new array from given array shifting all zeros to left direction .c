/*Write a C program to create a new array from a given array of integers 
shifting all zeros to left direction.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x=0,a[10],b[10];
	printf("Enter the  size of array ");
	scanf("%d",&n);
	printf("Enter  the element of array \n");\
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			b[x]=0;
			x=x+1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
		b[x]=a[i];
		x=x+1;	
		}	
	}
	printf(" The New Array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
}