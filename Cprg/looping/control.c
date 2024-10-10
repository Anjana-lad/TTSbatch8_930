// loop control statements:
//1 break,continue;goto;

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter number to break:");
//     scanf("%d",&num);
//     for(int i=0;i<100;i++){
//         if(i==num)
//         break;
//         else
//         printf("%d\t",i);
//     }
// }

// continue
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter number to break:");
//     scanf("%d",&num);
//     for(int i=0;i<100;i++){
//         if(i==num)
//         continue;
//         else
//         printf("%d \t",i);
//     }
// }

// goto statement
// syntax:
// label_name :
//     execution part;

// goto label_name;


#include<stdio.h>
int main(){
    int num;
label:
    printf("\n Enter  1 to exit :");
    scanf("%d",&num);
    if(num!=1){
       printf(" \n you enter %d",num);
        goto label;
    }
}