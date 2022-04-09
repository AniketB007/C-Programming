#include<stdio.h>
#include<conio.h>
int main()
{
	float n1,n2,n3,peri;
	printf("Enter the value of 1st side ");
	scanf("%f",&n1);
	printf("Enter the value of 2nd side ");
	scanf("%f",&n2);
	printf("Enter the value of 3rd side ");
	scanf("%f",&n3);
	//in triangle the first two side is greater than the last one so ,
	 if(n1<(n2+n3)&&n2<(n1+n3)&&n3<(n1+n2))
	{
		peri=n1+n2+n3;
		printf("The perimeter of the triangle is %.1f",peri);
		
	}
	else
	{
	printf("Sorry! The values you are entered is not making Triangle ");	
	}
}