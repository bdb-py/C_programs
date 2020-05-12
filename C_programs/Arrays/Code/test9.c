#include<stdio.h>

int main(){
    int arr[6],i,j,y=0;
    printf("Enter the 6 elements of array!! \n");
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0, j=5; i<3 , j>=3; i++, j--) {
      if(arr[i]!=arr[j]) {
         y = 1;
         break;
      }
   }
    if(y == 1){
        printf("Array is not a pallindrome \n");
    }
    else
    {
        printf("Array is a pallindrome \n");
    }
    printf("\n");

}
