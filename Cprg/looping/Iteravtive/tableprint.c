//print table with the help do..while loop.
#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter number:");
    scanf("%d",&num);
    do{
        printf("%d * %d = %d\n ",num,i,num*i);
        i++;
    }while(i<=10);
}