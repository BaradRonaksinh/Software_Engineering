/* 15. Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>

int main(){
	
	int math, phy, che, total;
	
	printf("\nEnter the Maths marks:");
	scanf("%d",&math);
	
	printf("\nEnter the Physics marks:");
	scanf("%d",&phy);
	
	printf("\nEnter the Chemistry marks:");
	scanf("%d",&che);
	
	if(math>=65 && phy>=55 && che>=50 && total>=190 || math+phy>=140){
		printf("Welcome! You are Eligible for This Course");
	}else{
		printf("Sorry! You are not Eligiblr for this Course");
	}
}
