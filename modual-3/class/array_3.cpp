/*homeWork*/

#include<stdio.h>

int main(){
	
	int i,j,a[5], b[5], c[10];
	printf("A num arrays:\n");
	for(i=0;i<5;i++){
		scanf("\n%d", &a[i]);
	}
	
	printf("B num arrays:\n");
	for(j=0;j<5;j++){
		scanf("\n%d", &b[j]);
	}
	
	c[i] = a[i] + b[i];
	
	printf("Total Arrays is:");
	j=0;
	for(i=0;i<10;i++){
		if(i<5){
			c[i]=a[i];
		}else{
			c[i]=b[i];
			j++;
			i++;
		}
	}
//	for(k=0;k<10;k++){
//		printf(" %d",c[i]);
//	}
	
	
	
//	printf("%d", a[5] + b[5]);
}
