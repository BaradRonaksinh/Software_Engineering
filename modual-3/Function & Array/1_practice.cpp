/*1. Write a program to find out the max number from given array using function.*/

#include<stdio.h>

int maxNum(int num);

int main(){
	int i,myArray[5],max,n;
	
	printf("Enter array elements:");
	
	for(i=0;i<5;i++){
		scanf("%d", &myArray[i]);		
	}
	
	for(i=0;i<5;i++){
		printf("\nThe A array is :%d", &myArray[i]);		
	}
	
	for(i=0;i<5;i++){
		max=myArray[0];
		n=myArray[i];
		maxNum(n);
	}
	printf("\nmax number is: %d",maxNum(n));	
	
}
int maxNum(int num){
	int i,max;
		
		if(num > max){
	    	max = num;
		}
	return max;
}

