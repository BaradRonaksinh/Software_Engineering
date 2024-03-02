/* 1. Display This Information using printf
a. Your Name
b. Your Birth date
c. Your Age
d. Your Address*/

#include <stdio.h>

int main(){
	
	//my information are here
	char name[] = "Barad Ronakisinh:";
	char birth_date[] = "21 March 2003";
	int age = 21;
	char address[] = "Gir Somanath";
	
	//show the my information using printf..
	
	printf("Name: %s\n", name);
	printf("Birthdate: %s\n", birth_date);
	printf("age: %d\n", age);
	printf("address: %s\n", address);
	
	return 0;
} 
