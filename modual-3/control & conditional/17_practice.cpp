/* 17. Write a C program to check whether a triangle can be formed with the given
values for the angles.*/

#include<stdio.h>

int main(){
	int formedTriangle, a, b, c;
	
	printf("Enter the value of A:");
	scanf("%d", &a);
	
	printf("Enter the value of B:");
	scanf("%d", &b);
	
	printf("Enter the value of C:");
	scanf("%d", &c);
	
	formedTriangle = a+b+c;
	if(formedTriangle == 180){
		printf("YES! triangle can be formed with the given values for the angles.");
	}else{
		printf("NO! triangle can't be formed with given values for the angles");
	}
	
	
}
