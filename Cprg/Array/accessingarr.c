// accessing array elements;
#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter array elements:");
    for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Element at arr[3]=%d",arr[3]);

}