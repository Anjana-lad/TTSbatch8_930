// call by value : it execute till the fuction call only.
#include<stdio.h>
int swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n CAlling function\n ");
    printf("A=%d,\n B=%d",a,b);
}
int main(){
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    printf("Before calling function: \n A=%d \n B=%d",a,b);
    swap(a,b);// calling function.
    printf("\n After calling function: \n A=%d \n B=%d",a,b);
}