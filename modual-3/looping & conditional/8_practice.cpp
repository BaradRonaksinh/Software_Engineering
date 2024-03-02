/*8. Write a program to find out the max from given number (E.g., No: -1562
Max number is 6).*/

#include<stdio.h>

int main(){
	int n, maxDigit = -1;
	
	printf("Enter the number:");
	scanf("%d", &n);
	
	if(n < 0){
		n = -n;
	}
	
	while(n != 0){
		int digit =  n % 10;
		
		if(digit > maxDigit){
			maxDigit = digit;
		}
		
		n = n/10;
	}
	
	printf("the maximun digit is :%d", maxDigit);
}//revise....

