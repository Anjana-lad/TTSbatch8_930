// searching array element 
#include<stdio.h>
int search(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element) 
         return i;
    }
     return -1;
}
int main(){
    int arr[]={74,52,63,96,85,51,42,93,45,77};
    int element;
    int size=sizeof(arr)/sizeof(int);
    printf("Enter number to be searched:");
    scanf("%d",&element);
    int res=search(arr,size,element);

    if(res==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at =%d",res);
    }
}