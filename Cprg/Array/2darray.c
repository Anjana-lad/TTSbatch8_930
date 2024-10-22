// 2 dimension array : matrix  : combination of rows and column.
// syntax: datatype array_name [row][col];
// #include<stdio.h>
// int main(){
//     int arr[2][3]={
//                    {1,2,3},
//                    {4,5,6}
//                  };
//     printf("Printing array:\n");
//     for(int row=0;row<2;row++){
//         printf("\n");
//         for(int col=0;col<3;col++){
//             printf("%d\t",arr[row][col]);
//         }
//     }
//     }
    // user input for array
    #include<stdio.h>
    int main(){
        int arr[2][2];
        int row,col;
        printf("Enter array elements:");
        for(row=0;row<2;row++){
            for(col=0;col<2;col++){
                scanf("%d",&arr[row][col]);
            }
        }
        printf ("Printing array\n");
        for(row=0;row<2;row++){
            printf("\n");
            for(col=0;col<2;col++){
                printf("%d ",arr[row][col]);
            }
        }
    } 
