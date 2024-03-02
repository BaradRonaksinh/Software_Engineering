#include<stdio.h>

int main(){
	
	int i,j,k,n;
	printf("N:");
	scanf("%d", &n);
	
	for(i = 6;i >= n;i--){
		for(j = i; j>=n;j--){
			printf(" *");
		}
		printf("\n");
	}
}
