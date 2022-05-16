#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,st,sp;
	for(r=1;r<=4;r++)
	{
	for(sp=1;sp<=41-r;sp++)
	{
	
		printf(" ");
	}
	for(st=1;st<=r;st++)
	{
		printf(" * ");
	}
	printf("\n");
   }
}