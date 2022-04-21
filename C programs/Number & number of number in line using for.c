#include<stdio.h>
#include<conio.h>
int main()
{
	int p,q,i,j,n;
	printf("Enter the number of lines");
	scanf("%d",&p);
    printf("Enter the number of numbers in a line");
	scanf("%d",&q);	
	i=1;
	n=1;
	for(i=1;i<=p;i++)
	{
		j=1;
		while(j<=q)
			{
				j++;
				printf("%d",n);
				n++;
			}
	
			printf("\n");
		
	}
}