#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,sw;
	printf("Enter two numbers");
	scanf("%d%d",&m,&n);
	sw=n;
	n=m;
	m=sw;
	printf("After swapping ");
	printf("m=%d n=%d",m,n);
	getch();
	
}