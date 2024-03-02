/* 5. WAP to print factorial of given number.*/

#include<stdio.h>
int main(){
	int a, n, fact=1;
	
	scanf("%d", &n);
	a = n;
	
	for(fact = 1; a>=1;a--){
		fact = fact *a;
	}
	printf("\nfactorial of %d is %d ", n, fact);
}
