#include<stdio.h>
#include<conio.h>
void main()
{
	int num,N1,S,N2,N3,res;
	printf("Enter the 3 digit number=");
	scanf("%d",&S);
	num=S;
	N1=num%10;
	num=num/10;
	N2=num%10;
	num=num/10;
	N3=num%10;
	
	N1=N1*N1*N1;
	N2=N2*N2*N2;
	N3=N3*N3*N3;
	
	res=N1+N2+N3;
	
	if(S==res)
	{
		printf("The number is armstrong number");
	}
	else
	{
		printf("The number is not a armstrong number ");
	}
	
}