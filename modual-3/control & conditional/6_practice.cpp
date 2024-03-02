/* 6. Find the Character Is Vowel or Not. */

#include<stdio.h>

int main(){
	
	int lowerCase_, upperCase_;
	char c;
	
	printf("enter the alphabet:");
	scanf("%c", &c);
	
	lowerCase_ = (c == 'a' || c == 'e'||c == 'i'||c == 'o'||c == 'u');
	upperCase_ = (c == 'A' || c == 'E'||c == 'I'||c == 'O'||c == 'U');
	
	if(lowerCase_ || upperCase_){
		printf("%c is a vowel", c);
	}else {
		printf("%c is consonant", c);
	}
	
	
}
