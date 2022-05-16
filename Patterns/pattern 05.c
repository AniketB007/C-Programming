#include<stdio.h>
#include<conio.h>
int main()
{
	char r,c;
	for (r=68;r>=65;r--)
	{
		for (c=65;c<=r;c++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}