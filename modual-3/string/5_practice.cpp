/*5. Write a program in C to compare two strings without using string library
functions.*/

#include<stdio.h>

int main(){
    char str1[10],str2[10];
    int i,flag=0,l1=0,l2=0;
    
    printf("enter first string:");
    gets(str1);
    
    printf("enter second string:");
    gets(str2);
    
    for(i=0;str1[i]!='\0';i++){
        l1++;
    }
    for(i=0;str2[i]!='\0';i++){
        l2++;
    }
    for(i=0;l1>l2?i<l1:i<l2;i++){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("both are different");
    }else{
        printf("both are same");
    }
}
