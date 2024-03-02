/*14.Accept 5 numbers from user and find those numbers factorials.*/

#include<stdio.h>

int main(){
	int i = 1,j,x[5],n,sum;
	
	
	for(x[j]= 1; x[j]<=5;x[j]++){
		printf("enter the number:\n");
		scanf("%d", &n);
	}
	
	for(x[j] = 1; x[j]<=5;x[j]++){
		for(i=1;i<=n;i++){
			sum = sum * i;
		}
	printf("\nthe %d! factorial answer is : %d",x[j] ,sum);
	}
	
	
}
