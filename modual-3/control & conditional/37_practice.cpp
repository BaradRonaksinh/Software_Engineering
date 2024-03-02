/* 37. WAP to show
i. Monday to Sunday using switch case.*/

#include<stdio.h>
int main(){
	int day;
	printf("day no:");
	scanf("%d",&day);
	
	switch(day){
		case 1:
			day = 1;
			printf("Sunday");
			break;
		case 2:
			day = 2;
			printf("Monday");
			break;
		case 3:
			day = 3;
			printf("Tuesday");
			break;
		case 4:
			day = 4;
			printf("Wednesday");
			break;
		case 5:
			day = 5;
			printf("Thursday");
			break;
		case 6:
			day = 6;
			printf("Friday");
			break;
		case 7:
			day = 7;
			printf("Saturday");
			break;
	}
}
