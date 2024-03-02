/*total sum of all element of metrix*/

#include<stdio.h>

int main(){
	int i,j,A[3][3], row, col, sum=0;
	
	printf("Enter A metrix:");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d", &A[row][col]);
		}
	}
	
	printf("Enter A metrix:\n");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf(" %d", A[row][col]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum += A[i][j];
		}
	}
	printf("Sum is :%d",sum);
}
