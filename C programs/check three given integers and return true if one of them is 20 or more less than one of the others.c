

//check three given integers and return true if one of them is 20 or more less than one of the others

#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3;
system("cls");
printf("Enter the 1st number ");
scanf("%d",&n1);	
printf("Enter the 2nd number ");
scanf("%d",&n2);	
printf("Enter the 3rd number ");
scanf("%d",&n3);	

 if(n1==20 || n2==20 || n3==20 || n1-n2==20 || n2-n1==20 || n2-n3==20 || n3-n2==20 || n1-n3==20 || n3-n1==20)
 {
 
 	printf("TRUE");
}
 else
 {
 
 	printf("FALSE");
}
}