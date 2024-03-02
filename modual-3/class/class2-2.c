#include<stdio.h>
int main(){
    
    int acc_no, balance=2000, value;
    char choice;
    
    printf("\nenter account number:");
	scanf("%d", &acc_no);
	
	printf("\nenter amount:");
	scanf("%d", &value);
	
	printf("enter your choice only in ('d'= deposite):");
	scanf("%c", &choice);
    
    if(choice == 'd'){
    	balance += value;
    	printf("account no %d total balance is %d",acc_no, value);
	}else{
		balance -= value;
		printf("account no %d total balance is %d",acc_no, value);
	}
	
    
    
// abhi kam baki he mere dost....
}
