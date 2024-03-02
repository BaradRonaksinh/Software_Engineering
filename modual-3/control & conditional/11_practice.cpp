/* 11. WAP to find number is even or odd using ternary operator.*/

#include<stdio.h>

int main(){
	int i;
	printf("value of i:");
	scanf("%d",&i);
	
	//ternary operator....
	
	i % 2 == 0 ? printf("number is even") : printf("number is odd");
	
}
