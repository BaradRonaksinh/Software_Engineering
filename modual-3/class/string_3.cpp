/**/

#include<stdio.h>

int main(){
	char name[10];
	int i, length=0;
	
	printf("Enter name:");
	gets(name);
	
	for(i=0;name[i]!='\0';i++){
		length++;
	}
	
	for(i=length; i>=0;i--){
		printf("%c", name[i]);
	}
}
