// 2 dimension array 
#include<stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{7,8,9}}; // 2d array
    for (int i=0;i<2;i++){  // row
        printf("\n");
        for(int j=0;j<3;j++){  // col
            printf("%d ",arr[i][j]); 
        }
    }
    // dynamic array
    int s1[3][3];
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            scanf("%d",&s1[row][col]);
        }
    }
        for(int row=0;row<3;row++){
            printf("\n");
        for(int col=0;col<3;col++){
           printf("%d ",s1[row][col]);
        }
    }

}