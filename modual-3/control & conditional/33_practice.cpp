/* 33. WAP to input the week number and print week day.*/

#include<stdio.h>

int main(){
	int day;
	
	printf("Enter the Number of Day:");
	scanf("%d", &day);
	

		if(day == 1){
			printf("Sunday");
		}else if(day == 2){
			printf("Monday");
		}else if(day == 3){
			printf("Tuesday");
		}else if(day == 4){
			printf("Wednesday");
		}else if(day == 5){
			printf("Thursday");
		}else if(day == 6){
			printf("Friday");
		}else if(day == 7){
			printf("Saturday");
		}else{
		printf("Enter the right number of day...");
	
	
	}
	
	
}
