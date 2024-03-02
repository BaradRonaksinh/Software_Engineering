/* 2. WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven).*/

#include<stdio.h>
int add(int a,int b), sub(int a,int b), mul(int a,int b), div(int a,int b);

int main(){
	
	int a, b, choice,result;
	
	printf("Enter the number A:");
	scanf("%d", &a);
	
	printf("Enter the number B:");
	scanf("%d", &b);
	
	printf("\nEnter Your Choice:");
	scanf("%d", &choice);
	
	switch(choice){
		
		case 1:
			result = add(a,b);
			printf("the addition of two number : %d", result);
			break;
			
		case 2:
			result = sub(a,b);
			printf("the subtraction of two number : %d", result);
			break;
			
		case 3:
			result = mul(a,b);
			printf("the multiplication of two number : %d", result);
			break;
			
		case 4:
			result = div(a,b);
			printf("the division of two number : %d", result);
			break;
		
		default:
			printf("Your Choice is invalid! Try Again.");
	}
	
}

int add(int a,int b){
	int ans;
	ans = a+b;
	
	return ans;
}

int sub(int a,int b){
	int ans;
	ans = a-b;
	
	return ans;
}

int mul(int a,int b){
	int ans;
	ans = a*b;
	
	return ans;
}

int div(int a,int b){
	int ans;
	ans = a/b;
	
	return ans;
}
