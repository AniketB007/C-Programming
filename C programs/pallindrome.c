#include<stdio.h>
#include<conio.h>
void main()
{
	int num,N1,N2,N3,REVERSE,S;
	printf("Enter the 3 digit number = ");
	scanf("%d",&S);
	num=S;
	N1=num%10;
	num=num/10;
	N2=num%10;
	num=num/10;
	N3=num%10;
	REVERSE=N1*100+N2*10+N3*1;

	if(S==REVERSE)
	{
		printf("The number is palindrome number");
		
	}
	else
	{
		printf("The number is not a palindrome number");
	}
	

}