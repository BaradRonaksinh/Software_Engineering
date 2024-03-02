/*9. Write a program in C to find the maximum number of characters in a string.*/

#include<stdio.h>

int main(){
	char str[50];
	int i, space=' ', count=0;
	
	printf("Enter your string:\n");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]= space){
			return 0;
		}else{
			count++;
		}
	}
	printf("total charater in a string is:%d", count);
}
