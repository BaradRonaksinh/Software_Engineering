/*with return type without argument*/

#include<stdio.h>

int sumOftwo();

int main(){
	int ans;
	
	ans = sumOftwo();
	printf("the answer is %d", ans);
}

int sumOftwo(){
	
	int a, b, c;
	
	printf("Enter value of a:");
	scanf("%d", &a);
	
	printf("Enter value of b:");
	scanf("%d", &b);
	
	c = a+b;
	
	return c;
}

