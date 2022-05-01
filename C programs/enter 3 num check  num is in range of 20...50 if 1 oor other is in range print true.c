#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	printf(" Enter the 1st Number");
	scanf("%d",&n1);
	printf(" Enter the 2nd Number");
	scanf("%d",&n2);
	printf(" Enter the 3rd Number");
	scanf("%d",&n3);
	
	if(n1>=20&&n1<=50 || n2>=20&&n2<=50 || n3>=20&&n3<=50)
	{
		printf(" True");
	} 
	else
	{
		printf(" False");
	}
}