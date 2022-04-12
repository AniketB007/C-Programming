#include<stdio.h>
#include<conio.h>
int main()
{
	int pass;
	printf("Enter the 4 digit  password");
	scanf("%d",&pass);
	
	if(pass==1234)
	{
		printf("Correct Password");
		
	}
	else
	{
		printf("Wrong Password");
	}

getch();
}