#include<stdio.h>

int main(){
     int arr[5],i,even_count = 0,odd_count = 0;

     printf("Enter 5 elements of array! \n");

     for(i=0;i<5;i++){
         scanf("%d", &arr[i]);
     }

    for(i=0;i<5;i++){
        if(arr[i]%2==0){
            even_count ++;
        }
        else{
            odd_count ++;
        }
    }
    printf("Total even numbers are   %d \n",even_count);
    printf("Total odd numbers are    %d \n ", odd_count);



}
