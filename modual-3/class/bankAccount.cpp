#include<stdio.h>

int main(){
	
	int acc_no; 
	float balance, value;
	char choice;
	
	
	printf("\nEnter your Account Number:");
	scanf("%d", &acc_no);
	
	printf("\nEnter your current bank balance:");
	scanf("%f", &balance);
	
	printf("\nEnter the amount you want deposite or withdraw your money:");
	scanf("%d", &value);
	
	printf("\nPress D for  deposite your money OR Press W for withdraw your money:");
	scanf(" %c",&choice);
	
	
	if(choice == 'd'){
		balance = balance + value;
		printf("Account number is %d and total balance is %f", acc_no, balance);
	}else if(choice == 'w'){
		if(balance < value){
			printf("Insufficient Balance...");
		}else{
			balance = balance - value;
			printf("Account number is %d and total balance is %f", acc_no, balance);
		}	
	}else{
		printf("Please select proper options.");
	}
	printf("\nour account number is %d and Current balance is : %f", acc_no, balance);
}
