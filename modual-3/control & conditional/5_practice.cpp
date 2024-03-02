/* 5. Check Number Is Positive or Negative. */

#include<stdio.h>

int main(){
	
	int a;
	
	printf("Enter the Number:");
	scanf("%d",&a);
	
	if(a > 0){
		printf("%d is a positive number", a);
	}else if(a < 0){
		printf("%d is a negative number", a);
	}else if(a == 0){
		printf("%d is a nighter positive or negative number", a);
	}
}


