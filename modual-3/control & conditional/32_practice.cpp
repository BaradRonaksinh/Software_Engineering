/* 32. Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%. */

#include<stdio.h>

int main(){
	int salary, hra, da, totalSalary;
	
	printf("\nEnter the your basic salary:");
	scanf("%d", &salary);
	
	if(salary <= 10000){
		hra = salary * 0.2;
		printf("\nYour Total HRA is : %d", hra);
		
		da = salary * 0.8;
		printf("\nYour Total DA is : %d", da);
		
		totalSalary = salary + hra + da;
		printf("\nYour Total Salary is %d", totalSalary);
	}else if(salary <= 20000 && salary > 10000){
		hra = salary * 0.25;
		printf("\nYour Total HRA is : %d", hra);
		
		da = salary * 0.9;
		printf("\nYour Total DA is : %d", da);
		
		totalSalary = salary + hra + da;
		printf("\nYour Total Salary is %d", totalSalary);
	}else if(salary > 20000){
		hra = salary * 0.3;
		printf("\nYour Total HRA is : %d", hra);
		
		da = salary * 0.95;
		printf("\nYour Total DA is : %d", da);
		
		totalSalary = salary + hra + da;
		printf("\nYour Total Salary is %d", totalSalary);
	}
	
	return 0;
}
