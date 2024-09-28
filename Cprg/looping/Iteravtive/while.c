// print numbers 1 to 10;
#include<stdio.h>
int main(){
    int i=1;
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    while(i<=num){
        printf("%d \t ",i);
         i++;
    }
}

