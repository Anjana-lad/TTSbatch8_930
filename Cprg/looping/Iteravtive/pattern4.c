/*
 1 1 1 1 1
   2 2 2 2
     3 3 3
       4 4
         5 
*/
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=5;row++){
//         for(space=1;space<=row;space++){
//             printf(" ");
//         }
//         for(col=5;col>=row;col--){
//             printf("%d",row);
//         }
//         printf("\n");
//     }
// }

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=5;row++){
//         for(space=5-1;space>=row;space--){
//             printf(" ");
//         }
//         for(col=1;col<=row;col++){
//             printf(" * ");
//         }
//     printf("\n");
//     }
// }

//      *
//    * * *
//  * * * * *
//* * * * * * *

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=4;row++){
//         for(space=4-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=2*row-1;col++){
//             printf(" *");
//         }
//     printf("\n");
//     }
// }

// * * * * * * *
//   * * * * *
//    * * *
//     *

#include<stdio.h>
int main(){
    int row,col,num,space;
    printf("Enter number of rows?");
    scanf("%d",&num);
    for(row=num;row>=1;row--){
        for(space=num-1;space>=row;space--){
            printf(" ");
        }
       int n=(row*2)-1;
        for(col=1;col<=n;col++){
            printf("*");
        }
        n-=2;
    printf("\n");
    }
}