/*2D array*/

#include<stdio.h>

int main(){
	int A[3][3]={{2,4,6},{3,7,9},{1,8,0}}, B[2][2], C[3][3], row, col;
	
	B[0][0]=21;
	B[0][1]=53;
	B[1][0]=78;
	B[1][1]=91;
	
	printf("\n Enter c metrix:");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d", &C[row][col]);
		}
	}
	
	printf("\n Metrix C:\n");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf(" %d", C[row][col]);
		}
		printf("\n");
	}
	
//	printf("\n Enter b metrix:");
//	for(row=0;row<2;row++){
//		for(col=0;col<2;col++){
//			scanf("%d", &C[row][col]);
//		}
//	}
	
	printf("\n Metrix B:\n");
	for(row=0;row<2;row++){
		for(col=0;col<2;col++){
			printf(" %d", B[row][col]);
		}
		printf("\n");
	}
	
	printf("\n Metrix A:\n");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf(" %d", A[row][col]);
		}
		printf("\n");
	}
}
