/* 8. WAP to accept the height of a person in centimeters and categorize the
person according to their height. */

#include<stdio.h>

int main(){
	int height, cm;
	
	printf("enter your height:");
	scanf("%d", &cm);
	
	if(cm >= 121 || cm < 145){
		printf("This person is small height :%d cm",cm);
	}else if(cm >=145 || cm < 160){
		printf("This person is avrage height :%d cm", cm);
	}else if( cm >= 160 || cm < 180){
		printf("This person is tall height :%d cm", cm);
	}else if(cm >= 180){
		printf("This person is taller");
	}
}



