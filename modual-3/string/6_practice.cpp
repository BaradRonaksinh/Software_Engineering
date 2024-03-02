/*6. Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i,len,a=0,d=0,sc=0;
    
    printf("enter a string:");
    gets(str);
    
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]<=90 && str[i]>=65){
            a++;
        }
        else if(str[i]<=122 && str[i]>=97){
            a++;
        }
        else if(str[i]<=57 && str[i]>=48){
            d++;
        }
        else{
            sc++;
        }
    }
    printf("total alphabets:%d\n total digit:%d\n total special character:%d",a,d,sc);
}
