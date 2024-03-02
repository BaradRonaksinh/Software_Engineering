/*30.  If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-*/

#include<stdio.h>

int main(){
	int totalBill, a,b,c,addBill;
	float charged = 0.18;
	
	printf("Product A price:");
	scanf("%d", &a);
	
	printf("Product B price:");
	scanf("%d", &b);
	
	printf("Product C price:");
	scanf("%d", &c);
	
	addBill = a + b + c;
	
	if(addBill < 256){
		printf("This is not suffient Please add more Items in cart!");
	}else if(addBill >= 256 && addBill < 800){
		totalBill = addBill;
		printf("Your Total Bill is :%d", totalBill);
	}else if(addBill >= 800){
		totalBill = addBill + (charged * addBill);
		printf("Your Total Bill is :%d", totalBill);
	}else{
		printf("Can you somenthing Missing? Please Check again.");
	}
	
	
	
}
