/*21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable. */

#include<stdio.h>

int main(){
	int a, b;
	
	printf("enter a first number:");
	scanf("%d",&a);
	
	printf("enter a second number:");
	scanf("%d",&b);
	
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("\nAfter using thrid veriable for swapping:");
	printf("\nFirst Number:%d",a);
	printf("\nSecond Number:%d",b);
	
	a = a + b;
	b = a - b;
	a = a - b; 
	
	printf("\nAfter Without using thrid veriable for swapping:");
	printf("\nFirst Number:%d",a);
	printf("\nSecond Number:%d",b);
	 
}
