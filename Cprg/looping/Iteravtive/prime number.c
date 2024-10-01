//prime number :number which is divisible by itself is called prime number.
#include<stdio.h>
int main(){
    int num,i,count=0;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Number is prime number.");
    }
    else{
        printf("Number is not prime.");
    }
}