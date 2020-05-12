#include<stdio.h>

int main(){
    int arr[5],i,arr2[5], sum[5];
    printf("Enter the 5 elements of first array  \n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the 5 elements of second array  \n ");
    for(i=0;i<5;i++){
       scanf("%d", &arr2[i]);
    }
    for(i=0;i<5;i++){
        sum[i] = arr[i] + arr2[i];
    }

    printf("The third array is  \n");

    for(i=0;i<5;i++){
        printf("%d \n",sum[i]);
    }

    printf("\n");
}
