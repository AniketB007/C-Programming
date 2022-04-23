#include<stdio.h>
#include<conio.h>
int main()
{
	int i,x;
	float s=0;
	printf("Value of S =\n");
	printf("S= 1+1/2+1/3+.............+1/x   \n");
	printf("Enter the Value of 'x' \n");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		s +=(float)1/i;
	}
	printf("The value of S = %.2f",s);
}