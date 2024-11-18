// basic array program
#include<stdio.h>
int main(){
    int n=6;
    int arr[]={4,5,9,3,75,21}; // static intialization
    int i;
    for(i=0;i<n;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    // dynamic array 
    int arr1[5];
    printf("Enter values for array:-\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<5;i++){
        printf("arr1[%d]=%d\n",i,arr1[i]);
    }

    // accessing array element:
    printf("Value at index 3 id %d",arr1[3]);
} 