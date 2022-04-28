  #include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2;
	printf("Enter the integer value");
	scanf("%d",&n1);
	printf("The divisor of %d is \n",n1);
	 for(n2=1;n2<=n1;n2++)
	 {
	 	if(n1%n2==0)
	 	
	 	{
	 	printf("%d\n",n2);
	    }

   }
}