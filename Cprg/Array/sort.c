// sorting array elements in ascending order.
#include<stdio.h>
int main(){
    int arr[7]={74,85,14,52,96,35,62};
    printf("Printing array\n");
    for(int i=0;i<7;i++){
        printf("%d \t",arr[i]);
    }
    // sorting array;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i] > arr[j]){
               int temp =arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    // printing array
    printf("\nAscending order array\n");
    for(int i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }
}