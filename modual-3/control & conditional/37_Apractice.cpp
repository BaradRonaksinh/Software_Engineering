/* 37. WAP to show
ii. Vowel or Consonant using switch case.*/

#include<stdio.h>
int main(){
	
	int alphabet;
	printf("Alphabet:");
	scanf("%d", &alphabet);
	
	switch(alphabet){
		case 1:
			alphabet = ('a' || 'e' || 'i' || 'o' || 'u');
			printf("this alphabet is Vowel");
			break;
		case 2:
			alphabet = ('b' || 'c' || 'd' || 'f' || 'g' ||'h'||'j'||'k'||'l'||'m'||'n'||'p'||'q'||'r'||'s'||'t'||'v'||'w'||'x'||'y'||'z');
			printf("this alphabet is Consonant");
			break;
	}
}
