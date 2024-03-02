/**/
#include<stdio.h>
//declartion
float cal_SI(float x, float y, float z);

int main(){
	
	float P, N, R, SI;
	
	scanf("%f", &P);
	scanf("%f", &N);
	scanf("%f", &R);
	
	//SI = cal_SI(P,N,R);
	printf("%f", cal_SI(P,N,R));
	
}
//inmplimentation
float cal_SI(float x, float y, float z){
	
	return (x*y*z)/100;
}

