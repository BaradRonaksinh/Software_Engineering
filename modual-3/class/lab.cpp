#include<stdio.h>

int main(){
	int a,i,table;
	
	i = 0;
	table = i * a;
	
	printf("\nenter the number for create a table:");
	scanf("%d", &a);
	
	while(i <= 10){
		printf("\n%d * %d = %d",a, i, a*i);
		
		i++;
	}
}
