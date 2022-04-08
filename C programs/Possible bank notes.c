#include<stdio.h>
#include<conio.h>
void main()
{
	int amount,total;
	printf("Enter the amount = ");
	scanf("%d",&amount);
	
	total=amount/500;
	printf("%d Note of 500.0\n",total);
	
    total=amount/100;
	printf("%d Note of 100.0\n",total);
	
	    total=amount/50;
	printf("%d Note of 50.0\n",total);

    total=amount/20;
	printf("%d Note of 20.0\n",total);

    total=amount/10;
	printf("%d Note of 10.0\n",total);

    total=amount/5;
	printf("%d Note of 5.0\n",total);
	
    total=amount/2;
	printf("%d Note of 2.0\n",total);
	
	total=amount/1;
	printf("%d Note of 1.0\n",total);
	
	


}