// sum of n natural numbers;
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        sum+=i;
    }
    printf("Sum of numbers=%d",sum);

}