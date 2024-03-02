/*3. Write a program in C to print individual characters of a string in reverse order.*/

#include<stdio.h>

int main(){
	char string[100];
	int i , length=0;
	
	printf("Enter string:");
	gets(string);
	
	for(i=0;string[i] != '\0';i++){
		length++;
	}
	
	for(i=length;i>=0;i--){
		printf("%c", string[i]);
	}
}
