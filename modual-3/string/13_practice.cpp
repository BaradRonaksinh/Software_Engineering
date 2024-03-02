/*13.Write a program in C to remove characters from a string except alphabets.*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[10];
    int i,j,length;
    printf("enter a string:");
    gets(str);
    length=strlen(str);
    for(i=0;i<length;i++){
        while (!(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !(str[i]=='\0')) {
         for (j=i;j<length;j++) {
            str[j]=str[j+1];
         }
         i--;
         length--;
         str[length]='\0';
      }
    }
    for(i=0;i<length;i++){
        printf("%c",str[i]);
    }
}
