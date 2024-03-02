/* 23. C Program to Reverse a Number Using FOR Loop.*/

#include<stdio.h>

int main(){
	int n, rev, digit=0, ans;
	
	printf("Enter the number:");
	scanf("%d", &n);
	
	ans=n;
	for (rev = 0; n != 0; n = n / 10) {
    digit = n % 10;
    rev = (rev * 10) + digit;
	}
	
	printf("The Reverse Number is : %d\n", rev);
	
}

//	if(ans != rev){
//		printf(" %d is not a Palindrom number", ans);
//	}else 	{
//		printf("%d1 is a Palindrom number", ans);
//	}
//
