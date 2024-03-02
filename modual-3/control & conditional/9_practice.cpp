/* 9. C Program to Check Uppercase or Lowercase or Digit or Special
Character.*/

#include<stdio.h>

int main(){
	char ch;
	
	printf("Enter the charater:");
	scanf("%c", &ch);
	
	if((ch >= 'A' && ch <= 'z') || (ch >= 'a' && ch <= 'z')){
		printf("%c is an  albhabet. \n", ch);
		
		if(ch >= 'A' && ch <= 'z'){
			printf("%c is a Uppercase later", ch);
		}else{
			printf("%c is a Lowercase later", ch);
		}
	}else if(ch >= '0' && ch <= '9'){
		printf("%c is a Digit", ch);
	}else{
		printf("%c is a Special Charater", ch);
	}
}

