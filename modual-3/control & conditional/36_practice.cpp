/* 36. Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include<stdio.h>
int main(){
	int unit, bill, toalBill;
	printf("Enter no of Unit:");
	scanf("%d", &unit);
	
	if(0 <= unit && unit <=50){
		bill = 0.50 * unit;
		toalBill = bill +(0.20 * bill);
		printf("Total Electricity Bill is :%d", toalBill);
	}else if(50 < unit && unit <= 150){
		bill = 0.75 * unit;
		toalBill = bill +(0.20 * bill);
		printf("Total Electricity Bill is :%d", toalBill);
	}else if(150 < unit && unit <=250){
		bill = 1.20 * unit;
		toalBill = bill +(0.20 * bill);
		printf("Total Electricity Bill is :%d", toalBill);
	}else if(250 < unit){
		bill = 1.50 * unit;
		toalBill = bill +(0.20 * bill);
		printf("Total Electricity Bill is :%d", toalBill);
	}
}
