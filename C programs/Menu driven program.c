#include<stdio.h>
#include<conio.h>
void main()
{
	int CHOICE;
	int n1,n2,n3;
	printf("Press 1 for Add \n");
	printf("Press 2 for Subtract \n");
	printf("Press 3 for Multiply \n");
	printf("Press 4 for Divide \n");
	scanf("%d",&CHOICE);
	
	if(CHOICE==1)
	{
	printf("Enter two numbers ");
	scanf("%d %d",&n1,&n2);
	n3=n1+n2;
	printf("The additon of these numbers is  %d",n3);
	}
	else
	if(CHOICE==2)
	{
	printf("Enter two numbers ");
	scanf("%d %d",&n1,&n2);
	n3=n1-n2;
	printf("The subtraction of these number is %d",n3);
	}
	else
	if(CHOICE==3)
	{
	printf("Enter two numbers ");
	scanf("%d %d",&n1,&n2);
	n3=n1*n2;
	printf("The multiplication of these number is %d",n3);
	}
	else
	if(CHOICE==4)
	{
	printf("Enter two numbers ");
	scanf("%d %d",&n1,&n2);
	n3=n1/n2;
	printf("The division of these numbers is %d",n3);
	}
	else
	{
		printf(" Sorry ! Your Input is Invalid ");
	}
	
}