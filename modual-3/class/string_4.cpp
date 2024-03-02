/**/
#include<stdio.h>

int main(){
	char sentence[50], ch;
	int i, count=0;
	
	printf("Write a Sentence:");
	scanf("%s", sentence);
	
	printf("\nWhich charater do you want to count?");
	scanf(" %c", &ch);
	
	for(i=0;sentence[i]!= '\0';i++){
		if(sentence[i]==ch){
			count++;	
		}	
	}
	
	printf("\nthis  %c  charater is %d times repeat on sentence",ch, count);
	
}
