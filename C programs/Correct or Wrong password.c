#include<stdio.h>
#include<conio.h>
int main()
{
	int p;
	char n1[10]={"1234"};
	char n2[10];
	printf("Enter the 4 digit  password  ");
	scanf("%s",&n2);
	p=strcmp(n1,n2);
	if(p==0)
	{
		printf("Correct Password");
		
	}
	else
	{
		printf(" Sorry !! you enter Wrong Password");
	}

getch();
}