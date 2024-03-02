/*31. Convert kilometers into meters.*/

#include<stdio.h>

int main(){
	int km, m;
	printf("Enter Kilometer:");
	scanf("%d",&km);
	
	m = 1000*km;
	printf("Total meters :%dm",m);
}
