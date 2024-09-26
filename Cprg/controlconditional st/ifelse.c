// if else statements:
/*
syntax:
if(condition){
true part
}
else{
false part
}
*/
// check weather person is able to vote or not.
#include<stdio.h>
int main(){
    int age;
    printf("Enter age;");
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not eligible to vote");
    }
}