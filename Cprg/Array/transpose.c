// transpose array : changing values of row and columns
//  1 2 3 
//  4 5 6
//  7 8 9
//  transpose array
//  1 4 7
//  2 5 8
//  3 6 9

#include<stdio.h>
int main(){
    int arr[3][3];
    int row,col;
    printf("Enter array elements:");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    printf("Printing array:");
    for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d\t",arr[row][col]);
        }
    }
    // transpose array
    printf("\n Printing transpose array \n");
    for(col=0;col<3;col++){
        printf("\n");
        for(row=0;row<3;row++){
            printf("%d ",arr[row][col]);
        }
    }

}