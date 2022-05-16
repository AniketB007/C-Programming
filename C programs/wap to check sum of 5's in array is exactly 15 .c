//Write a C program to check if the sum of all 5' in the array exactly 15 in a given array of integers.


#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the size of an array  ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==5) 
        {
           sum=sum+a[i];
        }
    }
     printf("\n");
    if(sum==15)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}