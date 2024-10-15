// program to make calculator.
#include<stdio.h>
int show(int a,char ch,int b,int res){
    printf("%d %c %d = %d",a,ch,b,res);
}
int add(int a,int b){
    show(a,'+',b,a+b);
}
int subtract(int a,int b){
    show(a,'-',b,a-b);
}
int multiply(int a,int b){
    show(a,'*',b,a*b);
}
int div(int a,int b){
    show(a,'/',b,a/b);
}
int modulo(int a,int b){
    show(a,'%',b,a%b);
}

int main(){
       int choice;
    int num1,num2;
    do{
    printf("\n 1. Addition.");
    printf("\n 2. Subtraction");
    printf("\n 3.Multiplication.");
    printf("\n 4. Division");
    printf("\n 5. Modulo");
    printf("\n Enter choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter numbers:");
        scanf("%d %d",&num1,&num2);
        add(num1,num2);
        break;
    case 2:
        printf("Enter numbers:");
        scanf("%d %d",&num1,&num2);
        subtract(num1,num2);
        break;
    case 3:
        printf("Enter numbers:");
        scanf("%d %d",&num1,&num2);
        multiply(num1,num2);
        break;
    case 4:
        printf("Enter numbers:");
        scanf("%d %d",&num1,&num2);
        div(num1,num2);
        break;
    case 5:
        printf("Enter numbers:");
        scanf("%d %d",&num1,&num2);
        modulo(num1,num2);
        break;
    default:
        printf("Invalid choice");
        break;
    }
    }while(choice<=5);
}