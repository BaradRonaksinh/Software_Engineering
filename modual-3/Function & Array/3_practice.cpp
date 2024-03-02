/*3. WAP to find reverse of string using recursion.*/

#include<stdio.h>

void revStr(char str,int start, int end);

int main(){
	char str[150];
	int i, length=0;
	
	printf("\nEnter the String:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		length++;
	}
	for(i<length;i>=0;i--){
		printf("%c", str[i]);
	}
}

void revStr(char str[],int start,int end){
	char temp;
	if(start >= end){
		return ;
	}
	
	//swapping
	temp = str[start];
	str[start]=str[end];
	str[end]=temp;
	
	return revStr(str,start+1,end-1);
	
}

