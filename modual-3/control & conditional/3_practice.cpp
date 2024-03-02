/*3. WAP to check if the given year is a leap year or not*/

#include<stdio.h>

int main(){
	int year;
	
	printf("Enter a year:");
	scanf("%d", &year);
	
	if(year % 400 == 0){
		printf("%d year is leap-year.",year);
	}else if(year % 100 == 0){
		printf("%d year is not leap-year.",year);
	}
	else if(year % 4 == 0){
		printf("%d year is leap-year.",year);
	}else{
		printf("enter valid year.");
	}
	
	return 0;
}
