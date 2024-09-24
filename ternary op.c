// ternary operator (?:) : it is also called conditional operator ;
//(condition) ? (true part ) : (false part);
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    (num1>num2) ? printf("Num1 is greater.") :printf("num2 is greater");
}