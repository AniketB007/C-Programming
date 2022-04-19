#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,i,j=0;
	printf("Enter the number");
	scanf("%d",&n1);
 for (i=1;i<=n1;i++)
 {
 	if(n1%i==0)
 	{
 		j++;
	 }
 }
	
	if(j==2)
	{
		printf("The number %d is Prime Number\n",n1);
	}
	else
	{
		printf("The number %d is not a Prime Number",n1);
	}

}