// recursion : function calling itself.
// program to find sum to natural numbers;
// #include<stdio.h>
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         n=n+sum(n-1);
//     return n;
//     }
// }
// int main(){
//     int num;
//     printf("Enter number:");
//     scanf("%d",&num);
//     printf("Sum of numbers=%d",sum(num));

// }
// task: program to print factorial of the given number with recursion.
// task2.: program to print fibonacci series till given number. 0,1,1,2,3,5,8,13,...

#include<stdio.h>
int fibonacci(int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
     return (fibonacci(n-1)+fibonacci(n-2));
    }
}
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
     printf("%d,",fibonacci(i));
    }
}