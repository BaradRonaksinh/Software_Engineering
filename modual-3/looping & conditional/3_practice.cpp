/* 3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers.*/

#include<stdio.h>

int main(){
    int a[10],i,evenNo=0,oddNo=0,sumOfeven=0,sumOfodd=0;
    for (i=0;i<10;i++){
        printf("\nenter a number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){

           if(a[i]%2==0){
              evenNo++;
              sumOfeven += a[i];
           }else{
                  oddNo++;
                  sumOfodd += a[i];
           }
    }

    printf("total even numbers:%d",evenNo);
    printf("\ntotal odd numbers:%d",oddNo);
    printf("\nsum of even:%d",sumOfeven);
    printf("\nsum of odd:%d",sumOfodd);
}

