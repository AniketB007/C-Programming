#include<stdio.h>
#include<conio.h>
void main()
{
	float n1,n2,n3,n4,D,M,m;

	printf("Enter 4 real numbers\n");
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	
	if(n1>=n2 && n1>=n3 && n1>=n4)
	{
		M=n1;
	}
	else if(n2>=n1 && n2>=n3 && n2>=n4)
	{
		M=n2;
	}
	else if(n3>=n1 && n3>=n2 && n3>=n4)
	{
		M=n3;
	}
	else
	{
		M=n4;
	}
	
	if(n1<=n2 && n1<=n3 && n1<=n4)
	{
		m=n1;
	}
	else if(n2<=n1 && n2<=n3 && n2<=n4)
	{
		m=n2;
	}
	else if(n3<=n1 && n3<=n2 && n3<=n4)
	{
		m=n3;
	}
	else
	{
		m=n4;
	}
	 D=M-m;
	printf("Difference Of Maximum and Minimum value is  %.2f ",D);
}