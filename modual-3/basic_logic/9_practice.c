/* 9. Find circumference of Triangle formula : triangle = a + b + c. */

#include<stdio.h>

int main(){
	int x, a, b, c;
	
	printf("Circumference of Triangle");
	
	printf("\nThe 'A' of triangle:");
	scanf(" %d", &a);
	
	printf("\nThe 'B' of triangle:");
	scanf("%d", &b);
	
	printf("\nThe 'C' of triangle:");
	scanf("%d", &c);
	
	x = a + b + c;
	
	printf("\nthe circumference of Triangle is:%d",x);
}
