/* 7. Accept marks from user and check pass or fail. */

#include<stdio.h>

int main(){
	int marks;
	
	printf("Enter Your marks:");
	scanf("%d", &marks);
	
	if(marks >= 35){
		printf("Congrac you are Pass! the exam");
	}else{
		printf("better luck next time you are failed the exam!");
	}
}
