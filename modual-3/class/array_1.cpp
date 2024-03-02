/*homeWork*/

#include<stdio.h>

int main(){
	int i, roll_no[5],maths[5],sci[5],eng[5];
	float per[i],total[5];
	
	for(i=1;i<=5;i++){
		printf("\n%d", i);
		printf("\nEnter your roll number:");
		scanf("%d", &roll_no[i]);

		printf("\nMaths marks:");
		scanf("%d", &maths[i]);

		printf("\nScience marks:");
		scanf("%d", &sci[i]);

		printf("\nEnglish marks:");
		scanf("%d", &eng[i]);
		
		total[i]= maths[i] + sci[i] + eng[i];
		printf("\nRoll number %d total marks are:%.2f", roll_no[i], total[i]);
		
		per[i]= total[i] / 3;
		printf("\nRoll number %d achive Percentage is :%.2f %", roll_no[i], per[i]);
		printf("\n------------------------* end *-----------------------");
	}
}
