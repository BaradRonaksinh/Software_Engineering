#include<stdio.h>

int main(){
	
	int choice,a,b;
	
	printf("\nenter a:");
	scanf("%d", &a);
	
	printf("\nenter b:");
	scanf("%d", &b);
	
	printf("\nenter your choice 1/2/3/4 :");
	scanf("%d", &choice);
	
	if(choice==1){
		printf("%d",a+b);
	}else if(choice==2){
		printf("%d",a-b);
	}else if(choice==3){
		printf("%d",a*b);
	}else if(choice==4){
		printf("%d",a/b);
	}else{
		printf("\n wrong choice");
	}
	printf("\n Finished....");
}
