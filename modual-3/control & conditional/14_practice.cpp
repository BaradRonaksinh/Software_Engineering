/*14.WAP to find the largest of three numbers.*/

#include<stdio.h>

int main(){
	int a, b, c;
	
	printf("value of First no:");
	scanf("%d", &a);
	
	printf("value of Second no:");
	scanf("%d", &b);
	
	printf("value of Third no:");
	scanf("%d", &c);
	
	if(a>b && a>c){
		printf("%d is a largest Number", a);
	}else if(b>c && b>a){
		printf("%d is a largest Number", b);
	}else{
		printf("%d is a largest Number", c);
	}
	
}
