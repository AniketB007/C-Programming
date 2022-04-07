#include<stdio.h>
#include<conio.h>
int main()
{
	int emp_id, wh,amount;
	double sal;
	printf("Enter the employer Id");
	scanf("%d",&emp_id);
	printf("Enter the total work hour of month");
	scanf("%d",&wh);
	printf("Enter the amount received per hour");
	scanf("%d",&amount);
	sal=wh*amount;
	printf("The Employer's Id is %d",emp_id);
	printf("The sallary of Employee for a month is %.2lf",sal);
}
