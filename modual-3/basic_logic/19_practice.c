/* 19.Calculate compound interest. */

/*
A = P(1 + r/)`nt`

1.A is the future value of the investment/loan, including interest.

2.P is the principal amount (initial investment/loan amount).

3.r is the annual interest rate (as a decimal).

4.n is the number of times that interest is compounded per unit 

5.t (usually per year).

6.t is the time the money is invested/borrowed for, in years.
*/

#include<stdio.h>
#include<math.h>

int main(){
	int compundingFrequency;
	float principal, rate, time,a;
	
	printf("Enter principal amount:");
	scanf("%f", &principal);
	
	printf("\nEnter annual interest rate [in decimal]:");
	scanf("%f", &rate);
	
//	printf("\nEnter the number of times interest is compund per year:");
//	scanf("%d", &compundingFrequency);
	
	printf("\nEnter the time of money are invested/borrowed for(in year):");
	scanf("%f", &time);
	
	a = (principal * pow(1 + rate/100, time));
	double compoundInterest = a - principal;
	
	printf("Compound Interst is : %lf", compoundInterest);
	
	return 0;
}//chack ...
