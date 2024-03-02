/* 26.Convert temperature Fahrenheit to Celsius.*/

#include<stdio.h>

int main(){
	
	int Fahrenheit, celsius;
	
	celsius = (Fahrenheit - 32 )* 5/9;
	
	printf("enter the temp:");
	scanf("%d", &Fahrenheit);
	
	printf("temp in celsius is:%d", celsius);
}
