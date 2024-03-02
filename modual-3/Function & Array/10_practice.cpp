/*10. WAP to perform Palindrome number using for loop and function.*/

#include<stdio.h>

void palindrome(int num);

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    palindrome(n);
}

void palindrome(int num){
    int i,r,rn=0;
    int a=num;
    for(i=1;num!=0;i++){
        r=num%10;
        rn=(rn*10)+r;
        num=num/10;
    }
    if(rn==a){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}//....
