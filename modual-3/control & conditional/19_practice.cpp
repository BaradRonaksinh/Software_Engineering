/* 19. Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
->. Unit                                    . Charge/unit
1. upto 350                                     @1.20
2. 350 and above but less than 600              @1.50
3. 600 and above but less than 800              @1.80
4. 800 and above                                @2.00*/

#include<stdio.h>

int main(){
	int bill, id, name, unit;
	
	printf("Enter your Customer ID:");
	scanf("%d", &id);
	
	printf("Enter your Name:");
	scanf("%d", &name);
	
	printf("Enter Consumed Unit:");
	scanf("%d", &unit);
	
	if(unit<=350){
		bill = unit * 1.20;
		printf("ID:%d \nName:%d \nTotal Electricity Bill is:%d rupees", id, name, bill);
	}else if(350 < unit && unit <= 600){
		bill = unit * 1.50;
		printf("ID:%d \nName:%d \nTotal Electricity Bill is:%d rupees", id, name, bill);
	}else if(600 < unit && unit <= 800){
		bill = unit * 1.80;
		printf("ID:%d \nName:%d \nTotal Electricity Bill is:%d rupees", id, name, bill);
	}else if(800 > unit){
		bill = unit * 2.0;
		printf("ID:%d \nName:%d \nTotal Electricity Bill is:%d rupees", id, name, bill);
	}
	
	
	
	
}
