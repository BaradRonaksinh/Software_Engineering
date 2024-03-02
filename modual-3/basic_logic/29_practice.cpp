/* 29.Convert minutes into seconds and hours. */

#include<stdio.h>

int main(){
	int min, sec, hr;
	
	printf("enter of the minutes:");
	scanf("%d", &min);
	
	sec = min * 60;
	hr = min/60;
	
	printf("\nthe total minutes is:%d", sec);
	printf("\nthe total hours is:%d", hr);
}
