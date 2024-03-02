/*12. WAP to accept 5 students name and store it in array.*/

#include<stdio.h>

int main(){
	char stdName, stdList[5];
	int i, length=1;
	
	printf("Enter Student name:");
	for(i=0;i<5;i++){
		scanf(" %s", &stdName);
	}
	stdName = stdList[5];
	for(i=0;stdList[i]<5;i++){
		printf("%s ", stdList[i]);
	}
	
	
}
