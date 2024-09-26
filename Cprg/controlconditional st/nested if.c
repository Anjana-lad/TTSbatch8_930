// nested if syntax:
/* if(condtion){
    if(condition){
        //true part
    }
    else{
        //false part
    }
  }
    else{
       if(){
    }
    else{
    }
} */

// program to check weather male or female is eligible for marriage or not.
#include<stdio.h>
int main(){
    int age;
    char ch;
    printf("Enter your choice:");
    printf("\n M ||m for male.\n F || f for female");
    scanf("%c",&ch);

    if(ch=='m' || ch== 'M'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>=21){
            printf("Person is eligible for marriage");
        }
        else{
            printf("person is not eligible for marriage.");
        }
    }
    else if (ch=='f'|| ch=='F'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>=18){
            printf("Person is eligible for marriage");
        }
        else{
            printf("person is not eligible for marriage.");
        }
    }
    else{
        printf("Invalid choice...");    
    }
} 
