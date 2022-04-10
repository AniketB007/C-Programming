#include<stdio.h>
#include<conio.h>
int main()
{
int p,q,r,s;
printf("Enter the value of 1st integer");
scanf("%d",&p);

printf("Enter the value of 2nd integer");
scanf("%d",&q);

printf("Enter the value of 3rd integer");
scanf("%d",&r);

printf("Enter the value of 4th integer");
scanf("%d",&s);

if((r>0)&&(s>0)&&(p%2==0)&&(q>r)&&(s>p)&&((r+s)>(p+q)))
{
	printf("The values are Correct");
	
}
else
{
	printf("The values are Wrong");
}
}
