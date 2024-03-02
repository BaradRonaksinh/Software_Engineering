/* 28.Convert years into days and months.*/

#include<stdio.h>

int main(){
	int y,d,m;
	
	printf("enter of the years:");
	scanf("%d", &y);
	
	d = y * 365;
	m = 12*y;
	
	printf("\nthe total days is:%d", d);
	printf("\nthe total months is:%d", m);
}
