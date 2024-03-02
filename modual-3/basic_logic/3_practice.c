/*3. WAP to Find Area And Circumference of Circle*/

#include<stdio.h>
int main(){
	//verable declaration
	
	int a, cr, r, pai=2.14;
	
	//Are of Circle
	printf("Find The Area of Circle");
	printf("\nRadius of Circle:");
	scanf("%d", &r);
	a = pai * (r*r);
	
	printf("\nArea of Circle:%d",a);
	
	printf("\n---------------------------------");
	
	//Circumfernce of Circle
	printf("\nFind The Circumference of Circle");
	printf("\nRadius of Circle:");
	scanf("%d", &r);
	cr = 2* pai *r;
	
	printf("\nCircumfernce of Circle:%d",cr);
	
	
}
