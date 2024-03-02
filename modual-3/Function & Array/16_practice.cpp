/*16.Accept 5 numbers from user and perform sum of array.*/

#include<stdio.h>

int main(){
	char arr[5];
	int i,sum=0,length=1;
	
	printf("Enter 5 number:\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	
	printf("sum of Array elements is :%d", sum);
}
