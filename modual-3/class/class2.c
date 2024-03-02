#include<stdio.h>

int main(){
	int a,b;
	
	printf("\nenter value of a:");
	scanf("%d", &a);
	
	printf("\nenter value of b:");
	scanf("%d", &b);
	
	if(a > b){
		printf("%d is biggest ", a);
	}else{
		printf("%d is biggest", b);
	}
	
	printf("\nthank you");
}
