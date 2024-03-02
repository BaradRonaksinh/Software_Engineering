/* 18. Write a C program to calculate profit and loss on a transaction.*/

#include<stdio.h>

int main(){
    float sale,pr;
    
    printf("enter sales value:");
    scanf("%f",&sale);
    
    printf("enter purchase value:");
    scanf("%f",&pr);
    
    if(sale>pr){
        printf("profit:%f",sale-pr);
    }
    else{
        printf("loss:%f",pr-sale);
    }
}
