/*7. WAP Find out length of string without using inbuilt function.*/

#include<stdio.h>
int main(){
	int i, length=0;
	char myArr[100];
	
	printf("Enter the sentence:");
	gets(myArr);
	
	for(i=0;myArr[i] != '\0';i++){
		length++;
	}
	
	printf("The length of string is:%d", length);
	
}
