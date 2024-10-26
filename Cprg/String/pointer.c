// pointer program to show the address of a variable defined.
#include<stdio.h>
int main(){
    int num;
    int *ptr;
    printf("Enter number;");
    scanf("%d",&num);
    ptr=&num;  // reference 
    printf("Address of %d=%p",num,ptr);
    printf("\n Value at pointer=%d",*ptr);
}