// assignment operator: +=,-=,/=,*=,==,= ;
//a=a+b;
//a+=b
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    num1+=num2;
    printf("\n num1=%d",num1);
    printf("\n num2=%d",num2);
    //num2=num2+60;
    num2+=60;
    printf("\n num2=%d",num2);
    num1*=10;
    printf("\n num1=%d",num1);
    num1/=5;
    printf("\n num1=%d",num1);

}