/*11. Accept 5 names from user at run time.*/

#include<stdio.h>

int main(){
	char names[5][20];
	int i;
	
	printf("Enter 5 names: \n");
	for(i = 1;i <= 5 ;i++){
		scanf("%s", names[i]);
	}
	
	printf("the name you are entered: ");
	for(i = 1;i <= 5;i++){
		printf("\n %d. %s", i,names[i]);
	}
	
	printf("\n");
}
