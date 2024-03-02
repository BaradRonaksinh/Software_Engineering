#include<stdio.h>
int main(){
	int i,j,k,l,n;
	scanf("%d",&n);
	
	for(i =n;i>=1;i--){
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		
		for(k=1;k<=n-j;k++){
			printf("*");
		}
		
		for(l=2;l<=n-j;l++){
			printf("*");
		}
		
		
		printf("\n");
	}
}
