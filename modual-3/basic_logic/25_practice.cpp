/* 25.Accept 5 expense from user and find average of expense.*/

#include<stdio.h>

int main(){
	
	int a, b, c, d;
	double avgExpense;
	
	printf("first expense:");
	scanf("%d", &a);
	
	printf("second expense:");
	scanf("%d", &b);
	
	printf("third expense:");
	scanf("%d", &c);
	
	printf("fourth expense:");
	scanf("%d", &d);
	
	avgExpense = (a + b + c + d)/5;
	
	printf("the average expanse of 5 expanse:%lf",avgExpense);
	
}
