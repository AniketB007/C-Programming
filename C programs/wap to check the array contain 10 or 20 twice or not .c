//Write a C program to check a given array of integers and return true if the array contains 10 or 20 twice. The length of the array will be 0, 1, or 2.


#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,n1=0,n2=0;
	
	printf("Enter  the size of Array which is  less than 3 \n");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter 1st Array element : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(int j=0;j<n;j++)
	{
		if(a[j]==10)
		{
			n1=n1+1;
		}
		if(a[j]==20)
		{
			n2=n2+1;
		}
	}
	if(n1==2 || n2==2)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
}