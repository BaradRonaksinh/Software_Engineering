/* 6. WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array.*/

#include<stdio.h>

int main(){
	int i, Choice,a[3][3], b[3][3], c[3][3], row, col;
	
	printf("Enter A metrix element:");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d", &a[row][col]);
		}
	}
	
//	for(row=0;row<3;row++){
//		for(col=0;col<3;col++){
//			printf(" %d", a[row][col]);
//		}
//		printf("\n");
//	}
	
	printf("Enter B metrix element:");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d", &b[row][col]);
		}
	}
	
//	for(row=0;row<3;row++){
//		for(col=0;col<3;col++){
//			printf(" %d", b[row][col]);
//		}
//		printf("\n");
//	}
	
	printf("\nAdd :1\nSub :2\nMul :3 :\n");
	scanf("%d", &Choice);
	
	if(Choice == 1){
		for(row=0;row<3;row++){
			for(col=0;col<3;col++){
				c[row][col] = a[row][col] + b[row][col];
				printf("%d", c[row][col]);
			}
			printf("\n");
		}
	}else if(Choice == 2){
		for(row=0;row<3;row++){
			for(col=0;col<3;col++){
				c[row][col] = a[row][col] - b[row][col];
				printf("%d", c[row][col]);
			}
			printf("\n");
		}
	}else if(Choice == 3){
		for(row=0;row<3;row++){
			for(col=0;col<3;col++){
				//somthing missing...
				c[row][col] = (a[row][col] * b[col][row]) + (a[row][col] * b[col+1][row]) + (a[row][col] * b[col+2][row]);
				printf("%d ", c[row][col]);
			}
			printf("\n");
		}
	}else{
		printf("Enter valid input");
	}
	
}//baki to nhi he but missing...
