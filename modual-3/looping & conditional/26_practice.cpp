/* 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).*/

#include<stdio.h>

int main(){
	int i, n, sum=0, totalSum=0;
	
	printf("Enter the N number:");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		sum += i;
		totalSum += sum;
	}
	
	printf("total value is :%d", totalSum);
}
