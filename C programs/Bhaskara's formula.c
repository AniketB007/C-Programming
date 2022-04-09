#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,formula;
	double x,y;
	printf("Enter the first  number");
	scanf("%f",&a);
	printf("Enter the second number");
	scanf("%f",&b);
	printf("Enter the Third number");
	scanf("%f",&c);
	
	formula=(b*b)-(4*(a*c));
	if(formula>0 && a!=0)
	{
		formula=sqrt(formula);
		x=(-b+formula)/(2*a);
		y=(-b-formula)/(2*a);
		
		printf("1st root =%0.5lf\n",x);
		printf("2nd root =%0.5lf\n",y);

	}
	else
	{
		printf("\n We can't find the roots of these numbers \n");
	}
	
}