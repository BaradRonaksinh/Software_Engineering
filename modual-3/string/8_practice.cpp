/*8. Write a program in C to count the total number of vowels or consonants in a
string.*/

#include<stdio.h>

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,len,v=0,c=0;
    printf("enter a string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if((str[i]<=90 && str[i]>=65) || (str[i]<=122 && str[i]>=97)){
            if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' ||str[i]=='u' || str[i]=='U'){
            v++;
            }
            else{
            c++;
            }
        }
    }
    printf("total vowels:%d\n total consonants:%d",v,c);
}
