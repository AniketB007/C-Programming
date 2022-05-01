#include<stdio.h>
#include<conio.h>
void main()
{
	int n,n1,n2,n3,n4,n5,rev,x;
	printf("Enter any 5 digit number : ");
	scanf("%d",&x);
	n=x;
	
	n1=n%10;
	n=n/10;
	
	n2=n%10;
	n=n/10;
	
	n3=n%10;
	n=n/10;
	
	n4=n%10;
	n=n/10;
	
	n5=n%10;
	
	rev=n1*10000+n2*1000+n3*100+n4*10+n5*1;
	//printf("%d\n",rev);
	if(x==rev)
	{
		printf("Enter number is palindrome number");
		
	}
	else
	{
		printf("Enter number is not palindrome");
	}
	

}