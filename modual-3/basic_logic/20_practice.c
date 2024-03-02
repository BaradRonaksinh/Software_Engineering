/* 20. Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/

#include<stdio.h>

int main(){
	
	double salary, insurance, loan, remainingSalary;
	
	printf("Enter your monthly salary:");
	scanf("%lf", &salary);
	
	insurance = 0.1 * salary;
	printf("\nYour  '10%' Insurance is :%lf",insurance);
	 
	loan = 0.1 * salary;
	printf("\nYour  10% Loan is :%lf",loan);
	
	remainingSalary = salary - (loan + insurance);
	
	printf("\nYour remaining salary is :%lf", remainingSalary);
	
	
}
