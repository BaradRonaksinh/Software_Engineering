/*24.Accept 5 employees name and salary and count average and total salary*/

#include<stdio.h>

int main(){
	char fperson, sperson, tperson, frperson;
	
	int a, b, c, d;
	
	printf("Enter name of first person and our salary:");
	scanf("%c"  ,&fperson);
	scanf("%d" , &a);
	
	printf("\nEnter name of second person and our salary:");
	scanf("%c", &sperson);
	scanf("%d"  ,&b);
	
	printf("\nEnter name of third person and our salary:");
	scanf("%c", &tperson);
	scanf("%d" , &c);
	
	printf("\nEnter name of fourth person and our salary:");
	scanf("%c", &frperson);
	scanf("%d",  &d);
	
	int avgSalary, totalSalary;
	
	avgSalary = (a + b + c + d)/5;
	totalSalary = a + b + c + d;
	
	printf("the average salary of five employee is: %d", avgSalary);
	printf("the total salary of five employee is: %d", totalSalary);
	//baki he...
}
