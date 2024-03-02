/* 12. Accept number of students from user. I need to give 5 apples to each
student. How many apples are required? */

#include<stdio.h>

int main(){
	
	int noOfStudent, countOfApple;
	
	printf("Enter the no of students:");
	scanf("%d", &noOfStudent);
	
	countOfApple = 5 * noOfStudent;
	
	printf("\n %d apples are required for distributing 5 appple for each student", countOfApple);
	
	
}
