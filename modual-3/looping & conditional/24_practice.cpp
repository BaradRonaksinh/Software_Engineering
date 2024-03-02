/* 24. 1 + 2 + 3 + 4 + 5 + ... + n.*/

#include<stdio.h>

int main(){
	int i, n, sum=0;
	
	printf("enter the number for sum:");
	scanf("%d", &n);
	
	for(i=1; i<=n;i++){
		sum += i;
	}
	
	printf("total sum of N number is :%d", sum);
}
