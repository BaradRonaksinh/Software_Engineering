/* 32. Accept 2 numbers and find out its sum check it size.*/

#include<stdio.h>
int main(){
	int num1, num2, sum;
	printf("Enter num1:");
	scanf("%d", &num1);
	
	printf("Enter num2:");
	scanf("%d", &num2);
	
	sum = num1 + num2;
	
	printf("Our Sum value is %d and Sum size is %d", sum,sizeof(sum));	
	
}
