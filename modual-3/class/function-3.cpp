/* with retuentype with argument*/

#include<stdio.h>

int sumOftwo(int a, int b);

int main(){
	int x,y;

	scanf("%d", &x);
	scanf("%d", &y);
	
	printf("the answer is :%d", sumOftwo(x,y));
}

int sumOftwo(int a, int b){
	
	return a + b;
}
