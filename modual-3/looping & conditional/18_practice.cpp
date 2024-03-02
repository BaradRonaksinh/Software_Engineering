/* 18. Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
1. .
2. .
iii. 5 * 10 = 50.*/

#include<stdio.h>
int main(){
	int i, num, table;
	printf("Enter the Number:");
	scanf("%d", &num);
	
	for(i=1;i<=10;i++){
		table = i * num;
		printf("\n%d * %d = %d", num, i, table);
	}
}
