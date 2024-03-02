/* Array.............*/

#include<stdio.h>

int main(){
	//1
	int myArray[3] = {12,63,45},i;
	float a[4];
	char b[5];
	//2
	a[0] = 4.5;
	a[1] = 5.5;
	a[2] = 1.9;

	
	printf("\n enter 5 charater element\n");
	
	for(i = 0;i<3;i++){
		scanf(" %c", &b[i]);
	}
	scanf(" %c", &b[0]);
	scanf(" %c", &b[1]);
	scanf(" %c", &b[2]);
	scanf(" %c", &b[3]);
	scanf(" %c", &b[4]);
	
	printf("\nArray");
	printf("\n %d %d %d", myArray[0], myArray[1], myArray[2]);
	
	for(i = 0;i<3;i++){
		printf("\n%d", myArray[i]);
	}
	
	for(i =0;i<4;i++){
		printf("\n%f", a[i]);
	}
	
	for(i = 0;i<5;i++){
		printf("\n %c", b[i]);
	}
}
