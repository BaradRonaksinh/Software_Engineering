/* 4. WAP to find factorial using recursion.*/

#include<stdio.h>

int factorial(int num);
int main(){
    int n,ans;
    printf("enter a number:");
    scanf("%d",&n);
    ans=factorial(n);
    printf("\nfactorial is:%d",ans);
}

int factorial(int num){
    int fact=1;
    if(num==0){
        return 1;
    }
    else if(num<0){
        printf("enter positive number");
        return 0;
    }
    else{
        while(num!=1){
              fact=num*factorial(num-1);
              return fact;
        }
    }
}
