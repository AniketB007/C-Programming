#include<stdio.h>
#include<conio.h>
int main()
{
	int M,i,total=0,n,s;
	float AVG;
	printf("Enter the number of Students");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
	printf("Enter the Marks of student       ");
	scanf("%d",&M);
	total=total+M;
	}
	AVG=total/s;
	printf("Average of marks in Maths is %.2f\n",AVG);
}