/* 16. Calculate the Sum of Natural Numbers Using the While Loop.*/

#include<stdio.h>

int main(){
	int n , i=1, sum=0;
	
	printf("Enter the number you want for sum of N number:");
	scanf("%d", &n);
	
	printf("\nSum of natural number is :");
	
	while(i<=n){
		sum = sum + i;
		i++;
	}
	printf("%d", sum);
}

//	for(i=1;i<=n;i++){
//		sum = sum + i;
//	}
