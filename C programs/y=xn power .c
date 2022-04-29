#include<stdio.h>
#include<conio.h>
void main()
{
	int x,n,i,y=1;
	printf("Enter x & n : ");
	scanf("%d %d",&x,&n);
	
	for(i=1;i<=n;i++)
	{
		y=y*x;
	}
	printf("x= %d ;n=%d; \nx to power n=%d", x,n,y);
}