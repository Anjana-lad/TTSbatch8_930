// array pointer.
#include<stdio.h>
int main(){
    int arr[7]={45,63,95,75,21,34,29};
    int *ptr1,*ptr2;
    ptr1=&arr[0];
    ptr2=&arr[6];
    printf("\n address of 0 index=%d",ptr1);
    printf("\n Address of last index=%d",ptr2);
    ptr1++;  // pointer arithmetic 
     printf("\n address of 1 index=%d",ptr1);
     ptr2--;
      printf("\n address of 5 index=%d",ptr2);
      int res= *ptr1+*ptr2;
      printf("\n Result=%d",res);

     printf("\n address of 0 index=%d",ptr1);
}