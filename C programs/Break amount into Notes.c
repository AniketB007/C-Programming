#include<stdio.h>
#include<conio.h>
void main()
{
	int amount,total;
	printf("Enter the Amount =");
	scanf("%d",&amount);
	
	total=amount/100;
	printf("%d Note of 100.0n is\n",total);

	amount=amount-(total*100);
	total=amount/50;
	printf("%d Note of 50.0 is \n",total);
	
	amount=amount-(total*50);
	total=amount/20;
	printf("%d Note of 20.0 is\n",total);
	
	amount=amount-(total*20);
	total=amount/10;
	printf("%d Note of 10.0 is \n",total);
	
	amount=amount-(total*10);
	total=amount/5;
	printf("%d Note of 5.0 is\n",total);
	
	amount=amount-(total*5);
	total=amount/2;
	printf("%d Note of 2.0 is\n",total);
	
	amount=amount-(total*2);
	total=amount/1;
	printf("%d Note of 1.0 is\n",total);
}