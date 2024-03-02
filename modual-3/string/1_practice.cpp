/*1. Write a program in C to find the length of a string without using library
functions.*/

#include<stdio.h>

int main(){
	char myString[130];
	int i, length=0;
	
	printf("Enter your string:");
	gets(myString);
	
	for(i=0;myString[i] != '\0'; i++){
		length++;
	}
	
	printf("Total String length is:%d", length);
	
}
