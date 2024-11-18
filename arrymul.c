// array multiplication
#include<stdio.h>
int main(){
    int arr[20][20],arr1[20][20],mul[20][20];
    int r,c,row,col;
    printf("Enter no of rows:");
    scanf("%d",&r);
    printf("Enter columns:");
    scanf("%d",&c);

    printf("Enter array elements:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr[row][col]);
        }
    }

    printf("Enter values for array 1");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }  
    printf("\nPrint array");
      for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d",arr[row][col]);
        }
    }
      printf("\nPrint array1");
      for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d",arr1[row][col]);
        }
    }
    // multiplication logic:
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
            for(int k=0;k<c;k++){
                mul[row][col]+=arr[row][k]*arr1[k][col];
         
            }
        }
    }

    // printing output.
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",mul[row][col]);
        }
    }
}