/*14.Write a program in C to combine two strings manually.*/

#include<stdio.h>
#include<string.h>
int main(){
    char str1[10],str2[10],str3[10];
    int i,len1,len2;
    printf("enter first string:");
    gets(str1);
    printf("\nenter second string:");
    gets(str2);
    len1=strlen(str1);
    for(i=0;i<len1;i++){
        str3[i]=str1[i];
    }
    len2=strlen(str2);

    for(int j=0;j<len2;j++){
            str3[i]=str2[j];
            i++;
    }
    str3[i]='\0';

    printf("\nstring is:");
    puts(str3);
}
