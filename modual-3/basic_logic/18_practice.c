/* 18. Calculate person’s Annual salary.*/

#include<stdio.h>

int main(){
	double salary, annualSalary;
	
	printf("Enter your Monthly salary:");
	scanf("%lf", &salary);
	
	annualSalary = 12 * salary;
	
	printf("\nYour Annual salary is: %lf",annualSalary);
}
