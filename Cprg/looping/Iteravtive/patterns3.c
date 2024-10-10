// 11111
// 2222
// 333
// 44
// 5

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=5;col>=row;col--){
//             printf("%d",row);
//         }
//     printf("\n");
//     }
// }

/*
ABCDE
FGHI
JKL
MN
O
*/

#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=1;row<=5;row++){
        for(col=5;col>=row;col--){
            printf("%c",ch++);
        }
    printf("\n");
    }
}
