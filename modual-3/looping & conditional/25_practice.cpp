/* 25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).*/

#include<stdio.h>

int main(){
	int i, n, square=0, sum=0;
	
	printf("Enter the N number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		square = (i*i);
		sum += square;
	}
	
	printf("total sum of N number is :%d", sum);
}
