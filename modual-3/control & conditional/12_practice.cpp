/* 12.WAP to find maximum number among 3 numbers using ternary operator. */

#include<stdio.h>

int main(){
	int a, b, c;
	
	printf("enter value of A:");
	scanf("%d", &a);
	
	printf("enter value of B:");
	scanf("%d", &b);
	
	printf("enter value of C:");
	scanf("%d", &c);
	
	(a>b && a>c)?printf("%d",a): (b>a && b>c)?printf("%d",b):printf("%d",c);
}
