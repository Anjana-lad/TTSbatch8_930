// multi-dimension array
//int arr[table][row][col];
#include<stdio.h>
int main(){
    int arr[3][3][3]={
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {4,5,6},
            {7,8,9},
            {1,5,9}
        },
        {
            {7,5,3},
            {8,5,1},
            {9,6,4}
        }};

        // printing array
        for(int table=0;table<3;table++){
            printf("\n");
        for(int row=0;row<3;row++){
            printf("\n");
            for(int col=0;col<3;col++){
                printf("%d ", arr[table][row][col]);
                }
            }
        }
}