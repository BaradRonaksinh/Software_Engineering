/*struct and union*/

#include<stdio.h>
struct student{
	int rollno;
	char grade;
	float per;
}s[5];
int main(){
	
	int i;
	struct student s[5];
//	struct student s1,s2,s3;
//	
//	s1.rollno=1;
//	s1.grade='a1';
//	s1.per=90.0;
//	
//	scanf("%d", &s2.rollno);
//	scanf("%d", &s2.per);
//	scanf("%d", &s2.grade);

	for(i=0;i<5;i++){
		printf("\nroll no:");
		scanf("%d", &s[i].rollno);
		printf("\n per:");
		scanf("%f", &s[i].per);
		printf("\n grade:");
		scanf(" %c", &s[i].grade);
	}
	
	for(i=0;i<5;i++){
		printf("\n %d %f %c", s[i].rollno,s[i].per,s[i].grade);
	}
}
