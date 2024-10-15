// function syntax:
// return type function name(parameters/arguments){
//     // body of the function
// }
/*
task :=
WAP to print a reverse number using function */;

// #include<stdio.h>
// int sum(); // function declaration
// int main(){
//     sum();   // function call;
// sum();
// }

// int sum(){  // function definition
//     int num1,num2,res;
//     printf("Enter numbers:");
//     scanf("%d %d",&num1,&num2);
//     res=num1+num2;
//     printf("Total=%d",res);
// }

/*categories of function:=
1. no arguments no returns;
2. no arguments with return;
3. with arguments no return;
4. with argument with return;
*/


// no arguments with return
//  #include<stdio.h>
//  int multiply(){  // function definition
//     int num1,num2,res;
//     printf("Enter numbers:");
//     scanf("%d %d",&num1,&num2);
//     res=num1*num2;
//    return res;
// }
//  int main(){
//  //  multiply();
//    printf("Multiplication=%d",multiply());  // function call
//  }

 // with arguments no return
//  #include<stdio.h>
//  int a,b;  // global variables
//  int add(int a,int b){   // in this a,b are formal parameters
//     printf("\n Result=%d",a+b);
//  }
//  int main(){
//   //  int a,b;    // local variables;
//     printf("Enter numbers:");
//     scanf("%d %d",&a,&b);
//     add(a,b);  // function call parameters are called actual parameters
//     add(52,20);
//  }

// with arguments with return
#include<stdio.h>
int sub(int ,int );  // function declaration
int main(){
    int num1,num2;  // local variables
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    printf("Subtraction=%d",sub(num1,num2));  // call with actual parameters
}
int sub(int a,int b){  // function definition
    return a-b;
}

/*
task :=
WAP to print a reverse number using function */;