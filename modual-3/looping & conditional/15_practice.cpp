/* 15.Calculate sum of 10 numbers using of while loop.*/

#include<stdio.h>

int main(){
	int n, i=1, sum=0;
	
	printf("Enter 10 number for sum:\n");

	while(i<=10){
		scanf("%d", &n);
		sum = sum + n;
		i++;
	}
	printf("total sum of 10 number is :%d",sum);
	
}
//	for(i=1; i<=10;i++){
//		scanf("%d", &n);
//		sum = sum + n;
//	}
