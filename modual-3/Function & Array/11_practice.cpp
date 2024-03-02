/*11.WAP to accept 5 numbers from user and display in reverse order using for
loop and array.*/

#include<stdio.h>

int main(){
	char arr[5];
	int i, length=1,n;
	
	printf("Enter 5 Number :");
	for(i=0;i<5;i++){
		scanf("%d",&n);
		arr[i]=n;
//		length++;
	}
	printf("the revers Array is :");
	for(i=4;i>=0;i--){
		printf(" %d ", arr[i]);
	}
	
	
}
