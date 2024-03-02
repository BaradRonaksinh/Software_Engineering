/* 4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement.*/

#include<stdio.h>

int main(){
	int a,b,add,sub,mul,div;
	char choice;
	
	printf("Calculator");
	
	printf("\nenter your choice:");
	scanf("%c", &choice);
	
	printf("\nenter a value of a:");
	scanf("%d", &a);
	
	printf("\nenter a value of b:");
	scanf("%d", &b);
	
	
	
	
	if(choice == '1'){
		add = a + b;
		printf("\naddition:%d",add);
	}else if(choice == '2'){
		sub = a- b;
		printf("\nsubtraction:%d",sub);
	}else if(choice == '3'){
		mul = a * b;
		printf("\nMultiplication:%d",mul);
	}else if(choice == '4'){
		
		div = a / b;
		printf("\nDivision:%d",div);
	}
}
