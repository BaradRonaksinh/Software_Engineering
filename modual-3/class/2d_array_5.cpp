/*two matrix division in store another matrix.*/


#include<stdio.h>

int main(){
	int i,j, row, col;
	float A[3][3], B[3][3],C[3][3];
	
	printf("Enter A metrix:\n");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d", &A[row][col]);
		}
	}
	
	printf("Enter B metrix:\n");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d", &B[row][col]);
		}
	}
	
	printf("A metrix:\n");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf(" %d", A[row][col]);
		}
		printf("\n");
	}
	
	printf("B metrix:\n");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf(" %d", B[row][col]);
		}
		printf("\n");
	}
	printf("Sum of A and B metrix in C :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			C[i][j] = A[i][j] / B[i][j];
			printf(" %.2f", C[i][j]);
		}	
		printf("\n");
	}
	
	
}
