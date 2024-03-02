/**/

#include<stdio.h>
#include<string.h>

int main(){
	char s1[20], s2[20];
	int len, a;
	
	printf("\n enter S1: ");
	gets(s1);
	
	printf("\n enter S2: ");
	gets(s2);
	
//	strcpy(s2,s1);
//	puts(s2);

//	len = strlen(s1);
//	printf("\n total length is %d", len);

	a=strcmp(s1,s2);
	printf("\n a = %d", a);
	if(a == 0){
		printf("\n both are same");
	}else{
		printf("\n differnt");
	}
}
