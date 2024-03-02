/* 11. Accept 5 names from user at run time.*/

#include<stdio.h>

int main(){
	
	int prime = 1,n,i;
	printf("enter the number:");
	scanf("%d", &n);
	
	for(i = 2; i<= n/2; i++){
		if(n % i == 0){
			prime = 0;
			break;
		}
	}
		
	if(prime){
		printf("%d is a PRIme number",n);
	}else{
		printf("%d is not a prime number", n);
	}
	
	if(n < 2 && n != 1){
		printf("%d is not a prime number", n);
	}
	
}
