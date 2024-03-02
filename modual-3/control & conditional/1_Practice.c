/*1. Write a C program to accept two integers and check whether they are equal
or not*/

#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("\nenter value of A:");
	scanf("%d",&a);
	
	printf("\nenter value of B:");
	scanf("%d",&b);
	
	if(a == b){
		printf("\nBoth A and B are same");
	}else if( a != b){
		printf("\nBoth A and B are not same");
	}else{
		printf("Please enter a valid value");
	}
}
