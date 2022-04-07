#include<stdio.h>
#include<conio.h>
int main()
{
	int emp_id, wh,amount;
	float sal;
	printf("Enter the employer Id");
	scanf("%d",&emp_id);
	printf("Enter the total work hour of month");
	scanf("%d",&wh);
	printf("Enter the amount received per hour");
	scanf("%d",&amount);
	sal=wh*amount;
	printf("The sallary of Employee for a month is %f",sal);
}