/* 34. Accept month number and display month name.*/

#include<stdio.h>

int main(){
	int month;
	printf("Enter Month Number:");
	scanf("%d", &month);
	
	if(month<1 || month>12){
		printf("Enter valid month number");
	}else{
		switch(month){
		case 1:
		printf("January");
		break;
		case 2:
		printf("Febuary");
		break;
		case 3:
		printf("March");
		break;
		case 4:
		printf("April");
		break;
		case 5:
		printf("May");
		break;
		case 6:
		printf("June");
		break;
		case 7:
		printf("July");
		break;
		case 8:
		printf("August");
		break;
		case 9:
		printf("Saptember");
		break;
		case 10:
		printf("Octomber");
		break;
		case 11:
		printf("Novamber");
		break;
		case 12:
		printf("Decmeber");
		break;
	}
	}
	
	
}
