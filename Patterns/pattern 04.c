#include<stdio.h>
#include<conio.h>
int main()
{
	char r,c;
	for (r=65;r<=68;r++)
	{
		for (c=65;c<=r;c++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}