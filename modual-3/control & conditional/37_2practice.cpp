/* 37. WAP to show
ii. Vowel or Consonant using switch case*/

#include<stdio.h>
int main(){
	int i;
	printf("enter alphabet to check:");
	scanf(" %c", &i);
	
	 switch(i){
        case 'a':
             printf("\nvowel");
             break;
        case 'e':
            printf("\nvowel");
            break;
        case 'i':
            printf("\nvowel");
            break;
        case 'o':
            printf("\nvowel");
            break;
        case 'u':
            printf("\nvowel");
            break;
        case 'A':
            printf("\nvowel");
            break;
        case 'E':
            printf("\nvowel");
            break;
        case 'I':
            printf("\nvowel");
            break;
        case 'O':
            printf("\nvowel");
            break;
        case 'U':
            printf("\nvowel");
            break;
        default:
            printf("\nConsonant");
            break;
    }
}
