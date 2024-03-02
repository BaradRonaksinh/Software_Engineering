/*13.WAP to accept 5 numbers from user and check entered number is even or odd
using of array.*/

#include<stdio.h>

int main(){
	int i, n[5];
	
	printf("\nEnter 5 number :\n");
	
	for(i=0;i<5;i++){
		scanf("%d", &n[i]);

		if(n[i] % 2 == 0){
			printf("\n%d is a Even Number.\n", n[i]);
		}else{
			printf("\n%d is a Odd Number.\n", n[i]);
		}
	}
}
