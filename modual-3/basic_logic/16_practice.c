/*16. Convert country’s name in abbreviate form. */

#include<stdio.h>

int main(){
	
	char countryName[20];
	
	printf("Enter the country name:");
	scanf("%s", countryName);
	
	printf("Abbreviated name:");
	printf("%c %c", countryName[0],countryName[1]);
	
	return 0;
}

