/*9. Write a program make a summation of given number (E.g., 1523 Ans:- 11).*/

#include<stdio.h>

int main(){
	int n, m, sum=0;
	
	printf("enter the number:");
	scanf("%d", &n);
//	n=a;
	
	while(n>0){
		m=n%10;
		sum+=m;
		n=n/10;
	}
	printf("Summation of number is :%d", sum);
}
