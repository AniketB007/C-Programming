#include <stdio.h>
#include<conio.h>
int main()
 {	
	int n1, n2, temp, i, sum=0;
    printf("Enter the 1st number "); 
    scanf("%d", &n1);
    printf("Enter the 2nd number ");
    scanf("%d", &n2);
	i=n1+1;	
    if(n1>n2) 
	{
		temp=n2;
		n2=n1;
		n1=temp;
	}
	
	for(i=n1+1;i<n2;i++) 
	{
		if((i%7) == 2 || (i%7) == 3)
		 {
			printf("%d\n", i);
	     }
	}
	
	return 0;
}