/* 17. Calculate person’s insurance premium based on salary.*/

#include<stdio.h>

int main(){
	
	double salary, premiumPercentage;
	
	printf("Enter your salary amount:");
	scanf("%lf", &salary);
	
	if(salary < 0){
		printf("\nInvalid salary. Please Enter a valid salary amount.");
	}
	
	premiumPercentage = 0.05;
	
	double premium = (salary * premiumPercentage)/ 100;
	printf("Your insurance premium based on salary of %2f is %2f .",salary, premium);
	
	return 0;
}

//revise...........//
