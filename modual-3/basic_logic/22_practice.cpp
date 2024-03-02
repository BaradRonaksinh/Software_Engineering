/* 22. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P. */

#include<stdio.h>
#include<math.h>

int main(){
	double p, r, amount, compundInterest;
	int t;
	
	printf("enter the value of P:");
	scanf("%lf", &p);
	
	printf("\nenter the value of R:");
	scanf("%lf", &r);
	
	printf("\nenter the value of R:");
	scanf("%d", &t);
	
	/*(a) Formula to calculate compound interest annually is given by:
	Amount= P(1 + R/100)t*/
	
	amount = p*(1 + r/100)* t;
	printf("\nCompound Interest annually is:%lf", amount);
	
	/*(b) Compound Interest = Amount – P.*/
	
	compundInterest = amount - p;
	printf("\nCompound Interest is:%lf", compundInterest);
	
}
