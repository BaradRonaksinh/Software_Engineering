/* 7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746.*/

#include<stdio.h>

int main(){
	int n, rev = 0, digit;
	
	printf("enter the number:");
	scanf("%d", &n);
	
	while(n != 0){
		digit = n % 10;
		rev = (rev*10) + digit;
		n = n/10;
	}
	
	printf("The Reverse Number is : %d\n", rev);

}
// revise...
