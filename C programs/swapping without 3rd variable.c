#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2;
	printf("Enter the 1st value  ");
	scanf("%d",&n1);
	printf("Enter the 2nd value  ");
	scanf("%d",&n2);
	printf("Before swapping the values are %d & %d\n",n1,n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;

	printf("After swapping the values are %d & %d",n1,n2);
}