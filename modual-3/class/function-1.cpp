/*without returntype with argument*/

#include<stdio.h>
void cal_si(float x, float y, float z); // Declaration
void table();
int main(){
	float X,Y,Z; // But actully start with 'P N R'...
	
	printf("\n enter principle amount :");
	scanf("%f", &X);
	
	printf("\n enter number of years :");
	scanf("%f", &Y);
	
	printf("\n enter Rate of Interst :");
	scanf("%f", &Z);
	
	
	
	cal_si(X, Y, Z); //     Calling....
	
	table();
}

void table(){
	int i,a;
	
	printf("Enter the number:");
	scanf("%d", &a);
	
	
	for(i = 1; i <= 10; i++){
		printf("\n%d * %d = %d", a, i, a * i);
	}
}

void cal_si(float x, float y, float z){    //Defination  Or Implimention
	float SI;
	

	
	SI = (x*y*z)/100;
	
	printf("Simple Intrest is : %f",SI);
	
}
