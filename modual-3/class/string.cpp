/* String */

#include<stdio.h>

int main(){
	
	char name[10], lname[10];
	
	printf("\n enter last name :");
	gets(lname);
	printf("\n your last name is :");
	puts(lname);
	
	printf("\n enter your name:");
	scanf("%s", name);
	printf("\n your name is : %s", name);
}
