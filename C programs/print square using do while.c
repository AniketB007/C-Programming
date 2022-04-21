#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the number upto which square required");
	scanf("%d",&n);
	printf("\nThe square of even value from 1 to %d\n",n);
    i=1;
	do
	{
	if (i%2==0)
	{
		printf("%d\n",i);
	}
	i++;
	}while(i<=n);
}