#include<stdio.h>
int main(){
    
    int x, y, z;
    printf("Enter the First Number");
    scanf("%d" ,&x);

    printf("Enter the Second Number");
    scanf("%d" ,&y);

    z = x + y;

    printf("Sum Of %d and %d is %d", x, y, z);
}