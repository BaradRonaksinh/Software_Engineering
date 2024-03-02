/*14. Perform 2D matrix array.*/

#include<stdio.h>

int main(){
	
	char a1[3][3],a2[3][3];
	int i, j;
	
	printf("Enter a1 element:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &a1[i][j]);
		}
	}
	
	printf("Enter a2 element:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &a2[i][j]);
		}
	}
	
	printf("a1 metrix :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", a1[i][j]);
		}
		printf("\n");
	}
	
	printf("a2 metrix :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", a2[i][j]);
		}
		printf("\n");
	}
}
