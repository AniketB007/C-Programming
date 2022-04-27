#include<stdio.h>
#include<conio.h>
int main()
{
	double i,j=1;
	double s=0;
	for(i=1;i<=7;i=i+2)
	{
		s=s+(i/j);
		j=j*2;
		
	}
	printf("The sum of S is %lf",s);
}