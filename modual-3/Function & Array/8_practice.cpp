/*8. WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
	a. information -print and display empno, empname, address
	andage
	b. Write a program of structure for five employee that
	provides the following information -print and display.*/
	
#include<stdio.h>
#include<string.h>

struct employee{
    int empno;
    int age;
    char empname[10];
    char address[15];
};

int main(){
    char s[10];
    int i,l,j,flag=0;

    struct employee e1={ 1, 30,"rahul", "ahmedabad" };
    struct employee e2={ 2, 33,"raziya", "surat" };
    struct employee e3={ 3, 26,"praful", "rajkot" };
    struct employee e4={ 4, 28,"geeta", "baroda" };
    struct employee e5={ 5, 41,"seeta", "goa" };
    printf("Emploeey 1:\n\temployee no = %d, age = %d, employee name = %s, address = %s\n", e1.empno, e1.age,e1.empname,e1.address);
    printf("Emploeey 2:\n\temployee no = %d, age = %d, employee name = %s, address = %s\n", e2.empno, e2.age,e2.empname,e2.address);
    printf("Emploeey 3:\n\temployee no = %d, age = %d, employee name = %s, address = %s\n", e3.empno, e3.age,e3.empname,e3.address);
    printf("Emploeey 4:\n\temployee no = %d, age = %d, employee name = %s, address = %s\n", e4.empno, e4.age,e4.empname,e4.address);
    printf("Emploeey 5:\n\temployee no = %d, age = %d, employee name = %s, address = %s\n", e5.empno, e5.age,e5.empname,e5.address);

    printf("\nenter a string:");
    gets(s);
    l=strlen(s);

    for(i=0;i<=l/2;i++){
        if(s[i]!= s[l-i-1]){
         flag = 1;
         break;
      }
    }

    if(flag==1){
        printf("\nnot palindrome");
    }
    else{
        printf("\npalindrome");
    }
}
