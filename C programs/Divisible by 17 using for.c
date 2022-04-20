#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,i,sum,temp;
printf("Enter the 1st number");
scanf("%d",&n1);
printf("Enter the 2nd number");
scanf("%d",&n2);
if(n1 > n2)
    {
		temp = n2;
		n2 = n1;
		n1 = temp;
	}
	
	for(i=n1;i<= n2;i++)
	{
		if((i % 17) != 0) 
		{
			sum += i;
		}
         
	}
	
	printf("The sum of all number which is not divisible by 17 is %d\n", sum);
	
	return 0;
	
	}

