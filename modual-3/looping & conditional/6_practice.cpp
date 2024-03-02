/* 6. WAP to print Fibonacci series up to given numbers.*/

#include<stdio.h>

int main(){
	
	int a = 0, b = 1, next, n;
	
	printf("\nenter the number for series:");
	scanf("%d", &n);
	
	printf("\nFibonaci Series...");
	
	for(int i = 1; i < n; i++){
		
		if(i <= 1){
			next = i;
		}else{
			next = a + b;
			a = b;
			b = next;
		}
		
		printf("\n%d", next);
	}
	
	printf("\nby by..");
	
	
}
