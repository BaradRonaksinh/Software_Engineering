/*10. Write a program in C to extract a substring from a given string.*/

#include<stdio.h>
#include<string.h>

int main(){
	
    char s[10];
    int i,l,len,n;
    
    printf("enter a string:");
    gets(s);
    
    printf("\nenter starting position you want to extract from:");
    scanf("%d",&n);
    
    printf("\nenter lentgh of substring:");
    scanf("%d",&l);
    
    len=strlen(s);
    
    if(l>len){
        printf("\nsubstring greater than actual string");
    }else{
        printf("\nsubstring is:");
        for(i=n;i<l+n;i++){
            printf("%c",s[i]);
        }
    }
}
