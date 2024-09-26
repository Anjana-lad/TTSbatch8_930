// program to show arithmetic operators.
//+,-,/,*,%,++,--;
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter num1 and num2:");
    scanf("%d %d",&num1,&num2);
    printf("Addition:");
    res=num1+num2;
    printf("\n Total=%d",res);
    res=num1-num2;
    printf("\n Subtraction=%d",res);
    res=num1*num2;
    printf("\n Multiplication=%d",res);
     res=num1/num2;
    printf("\n Division=%d",res);
     res=num1%num2;
    printf("\n Modulo=%d",res);

    // ++ 
    printf("\n post Increment=%d",num1++);
    printf("\n Num1=%d",num1);
    printf("\n Pre increment=%d",++num2);
    // --
    printf("\n num1=%d",num1);
    printf("\n post decrement=%d",num1--);
    printf("\n num1=%d",num1);
    printf("\n Pre decrement=%d",--num2);

}