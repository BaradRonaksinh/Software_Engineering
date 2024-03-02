/*35.Accept the input month number and print number of days in that
month.*/

#include<stdio.h>

int main(){
	int month,a,days,year;
	
	printf("Enter month number:");
	scanf("%d",&a);
	month = a;
	
	if(month < 1 || month > 12){
		printf("enter the valid month number");
	}else{
		
		switch(month){
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				days = 31;
				printf("this month total days :%d",days);
				break;
			case 4:case 6:case 9:case 11:
				days = 30;
				printf("this month total days :%d",days);
				break;
			case 2:
				printf("Enter the year:");
				scanf("%d", &year);
				
				if((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0)){
					days = 29 ;//Leap Year
					printf("In %d is leap year so total days:%d ",year,days);
				}else{
					days = 28 ;//not leap year
					printf("In %d is leap year so total days:%d ",year,days);
				}
				break;
		}
		
	}
	
	
}
