// nested loops to perform different patterns.
/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=0;row<5;row++){
//         for(col=0;col<5;col++){
//             printf("* ");
//         }
//     printf("\n");
//     }
// }

/*
*
* *
* * *
* * * *
* * * * *
*/

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=0;row<5;row++){
//         for(col=0;col<=row;col++){
//             printf("* ");
//         }
//     printf("\n");
//     }
// }

/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             printf("%d ",row);
//         }
//     printf("\n");
//     }
// }

/*
A
A B
A B C
A B C D
A B C D E
*/

// #include<stdio.h>
// int main(){
//     int col,row;
//     char ch ='A';
//     for(row=0;row<=5;row++){
//         for(col=0;col<=row;col++){
//             printf("%c ",ch+col);
//         }
//         printf("\n");
//     }
// }

/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            if(col%2==0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
    printf("\n");
    }
}
/*
A
* *
B C D
* * * *
E F G H I
* * * * * *
J K L M N O P
*/


