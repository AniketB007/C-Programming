
//check given array of integer and return true if every 5 that appears in given array is next to another 5.


#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,s=0;
    printf("Enter the size of an array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the  element of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==5 && a[i+1]==5) 
        {
            s=1;
        }
}
    printf("\n");
    if( s==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

}