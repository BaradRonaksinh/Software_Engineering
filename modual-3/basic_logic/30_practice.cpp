/*30. WAP to convert years into days and days into years.*/

#include<stdio.h>

int main(){
	int year, day, days, years;
	
	printf("\nenter number of day:");
	scanf("%d",&days);
	
	printf("\nenter number of year:");
	scanf("%d",&years);
	
	year = days /365;
	
	day = years * 365;
	
	printf("\ndays into years is:%d", year);
	printf("\nyears into days is:%d", day);
	
}
