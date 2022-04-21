#include <stdio.h>
#include<conio.h>
int main() 

 {
	int n1,i,n2=1,x = 0;
	printf("Enter how many number of lines want");
	scanf("%d", &n1);
	i=1;
	do
	 {
		do 
		{
			printf("%d ",n2++);
			x++;
		}while(x < 3);
		x = 0;
		i++;
		printf("\n");
	}while(i<=n1);
	
	return 0;
}