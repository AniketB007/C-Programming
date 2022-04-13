#include <stdio.h>
#include<conio.h>
int main() 

 {
	int n1,i,n2=1,x = 0;
	printf("Enter how many number of lines want");
	scanf("%d", &n1);
	i=1;
	while(i<=n1)
	 {
		while(x < 3) 
		{
			printf("%d ",n2++);
			x++;
		}
		x = 0;
		i++;
		printf("\n");
	}
	
	return 0;
}