/*class*/

#include<stdio.h>

int main(){
	int i ,num[10],  n=10;
	printf("Enter 10 values:\n");
	for(i=1;i<=n;i++){
		scanf("%d", &num[i]);
	}
	
	for(i=1;i<=10;i++){
		if(num[i] % 2 == 0){
		printf("\n %d number is a even",num[i]);
		}else{
		printf("\n %d number is a odd", num[i]);
		}	
	}
	
}
