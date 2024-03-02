#include<stdio.h>

int main(){
	int firstNum, secondNum, result, n;
	char option;
	
	do{
		printf("What Operation would you like to do?\n\n");
		printf("Press 1 for Addition\n");
		printf("Press 2 for Subtraction\n");
		printf("Press 3 for Multiplication\n");
		printf("Press 4 for Division\n");
		scanf("%d",&n);
		printf("enter value for the first number\n");
		scanf("%d",&firstNum);
		printf("enter value for the second number\n");
		scanf("%d",&secondNum);
		switch(n){
			case 1:
				result = firstNum + secondNum;
				printf("Addition of the numbers is :%d", result);
				break;
			case 2:
				result = firstNum - secondNum;
				printf("Subtraction of the numbers is :%d", result);
				break;
			case 3:
				result = firstNum * secondNum;
				printf("Multiplication of the numbers is :%d", result);
				break;
			case 4:
				result = firstNum / secondNum;
				printf("Subtraction of the numbers is :%d", result);
				break;
			default:
				printf("Wrong Input");
		}
		printf("\nDo you want to coutinue y/n ?");
		option = getch();
	}while(option == 'y');
}
