
//Write a C program to check if a given array of integers contains 5 next to a 5 somewhere

#include <stdio.h>
#include<conio.h>
void main()
{
    int n,i,j=0;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==5 && a[i]==a[i + 1]) 
        {
            j=1;
            break;
        }
    }
    
    printf("\n");
    if(j==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}