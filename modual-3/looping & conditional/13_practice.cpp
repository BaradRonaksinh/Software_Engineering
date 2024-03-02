/*13.calculate the Factorial of a Given Number using while loop.*/

#include<stdio.h>

int main(){
	int i = 1,n,sum;
	
	printf("enter the number:");
	scanf("%d", &n);
	
	while(i <= n){
		sum = sum * i;
		i++;
	}
	printf("the %d! factorial answer is : %d",n ,sum);
}
