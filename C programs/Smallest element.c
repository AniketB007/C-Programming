#include<stdio.h>
#include<conio.h>
int main()
{
	
int i,n1,p;

 int n[6];
 printf(" Enter the  6 numbers\n");
 for(i=0;i<6;i++)
 {
 	scanf("%d",&n[i]);
 }
	n1=n[0];
	p=0;
	for(i=0;i<6;i++)
	{
		if(n1>n[i])
		{
			n1=n[i];
			p=i;
		}
	}
	    
	
	printf("\nThe  smallest element is %d \n",n1);
	printf("position of element %d\n",p);
} 