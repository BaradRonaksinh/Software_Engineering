#include<stdio.h>

int main(){
	
	float percentage;
	
	printf("Student Report Card");
	
	printf("\nEnter Your Class percentage:");
	scanf("%f", &percentage);
	
	if(percentage >= 80 && percentage <= 100){
		printf("Distiction");
	}else if(percentage >= 70 && percentage < 80){
		printf("First Class");
	}else if(percentage >= 60 && percentage <70){
		printf("Second Class");
	}else if(percentage >= 35 && percentage <60){
		printf("Pass Only");
	}else if(percentage < 35){
		printf("fail");
	}else{
		printf("Please enter valid percentage");
	}
}
