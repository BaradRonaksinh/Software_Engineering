/*15.Store 5 numbers in array and sort it in ascending order.*/

#include<stdio.h>
void ascending(int arr1[5]);
int main(){
    int a[5],i;
    printf("enter array element:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    ascending(a);
}

void ascending(int arr1[5]){
    int i,j,temp;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(arr1[j]>arr1[j+1]){
            temp=arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
            }
        }
    }
    printf("\nascending array is:");
    for(i=0;i<5;i++){
        printf("%d ",arr1[i]);
    }
}
