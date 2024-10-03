/*
        *
      * *
    * * *
  * * * *
* * * * *
*/

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=0;row<=5;row++){
//         for(space=5-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=0;col<=row;col++){
//             printf(" *");
//         }
//     printf("\n");
//     }
// }

/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>
int main(){
    int row,col,space;
    for(row=1;row<=5;row++){
        for(space=5-1;space>=row;space--){
            printf("  ");
        }
        for(col=1;col<=row;col++){
            printf("%d ",col);
        }
    printf("\n");
    }
}
/*
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5

*/
