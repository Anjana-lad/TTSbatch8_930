// relational operator : <,>,<=,>=,
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter num1,num2:");
    scanf("%d %d",&num1,&num2);
    printf("\n %d>=%d=%d",num1,num2,num1>=num2);
    printf("\n num1<=num2=%d",num1<=num2);
    printf("\n Double equal=%d",num1== num2);
}