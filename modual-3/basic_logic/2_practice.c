/*2. Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo).*/

#include<stdio.h>

int main(){
	
	//verable declaration
	
	int a, b, c;
	
	printf("Calculator :)");
	
	//Additions
	
	printf("\nAddition ");
	
	printf("\nEnter the first Number:");
	scanf("%d", &b);
	
	printf("Enter the second Number:");
	scanf("%d", &c);
	
	a = b + c;
	printf("Addition is :%d",a);
	
	printf("\n---------------------------------");
	
	//Subtraction
	
	printf("\nSubtraction ");
	
	printf("\nEnter the first Number:");
	scanf("%d", &b);
	
	printf("Enter the second Number:");
	scanf("%d", &c);
	
	a = b - c;
	printf("Subtraction is :%d",a);
	
	printf("\n---------------------------------");
	
	//Multiplication
	
	printf("\nMultiplication ");
	
	printf("\nEnter the first Number:");
	scanf("%d", &b);
	
	printf("Enter the second Number:");
	scanf("%d", &c);
	
	a = b * c;
	printf("Multiplication is :%d",a);
	
	printf("\n---------------------------------");
	
	//Division
	
	printf("\nDivision ");
	
	printf("\nEnter the first Number:");
	scanf("%d", &b);
	
	printf("Enter the second Number:");
	scanf("%d", &c);
	
	a = b / c;
	printf("Division is :%d",a);
	
	printf("\n---------------------------------");
	
	//Modulo
	
	printf("\nModulo ");
	
	printf("\nEnter the first Number:");
	scanf("%d", &b);
	
	printf("Enter the second Number:");
	scanf("%d", &c);
	
	a = b % c;
	printf("Modulo is :%d",a);
	
	printf("\n---------------------------------");
	
	
	
}
