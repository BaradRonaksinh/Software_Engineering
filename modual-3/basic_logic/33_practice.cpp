/* 33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3).*/

#include<stdio.h>

int main(){
	int a,n1,n2,n3;
	
	printf("Enter a number:");
	scanf("%d", &a);
	
	n1 = a;
	printf("\nFirst power of number %d is %d",a,n1);
	n2 = a*a;
	printf("\nSecond power of number %d is %d",a,n2);
	n3 = a*a*a;
	printf("\nThird power of number %d is %d",a,n3);
	
	
}
