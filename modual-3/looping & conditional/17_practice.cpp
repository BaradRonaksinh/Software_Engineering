/* 17. Calculate 5 numbers from user and calculate number of even and odd using
of while loop.*/

#include<stdio.h>
int main(){
	
    int a[5],i=0,j=0;
    
    printf("enter 5 numbers:\n");
    while(i<5){
        scanf("%d",&a[i]);
        i++;
    }
    while(j<5){
        if(a[j]%2==0){
            printf("\n%d is even",a[j]);
        }
        else{
            printf("\n%d is odd",a[j]);
        }
        j++;
    }
}
