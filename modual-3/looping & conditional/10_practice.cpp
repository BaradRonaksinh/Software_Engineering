/*10.Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans:- 5)*/

#include<stdio.h>

int main(){
	int n, m=0, tep=0,sum=0;
	
	printf("enter the number:");
	scanf("%d", &n);
	
	m=n%10;
	while(n>=10){
		n=n/10;
	}
	tep = n;
	sum = m + tep;
	printf("Summation of number is :%d", sum);
}
