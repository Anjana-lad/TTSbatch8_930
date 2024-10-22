// array operation like addition ,subtraction, multiplication
#include<stdio.h>
#define max 200
int main(){
    int r,c,row,col,arr[max][max],arr1[20][20],sum[20][20],sub[20][20],mul[20][20];
    printf("Enter rows:");
    scanf("%d",&r);
    printf("Enter cols:");
    scanf("%d",&c);

    printf("Enter array elements for array 1:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    printf("Enter array elements for array 1:");
        for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Array 1\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr[row][col]);
        }
    }
       printf("\n Array 2\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr1[row][col]);
        }
    }
// addition logic;
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            sum[row][col]=arr[row][col]+arr1[row][col];
        }
    }
    // to print sum o/p
       printf("\n array addition \n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",sum[row][col]);
        }
    }
// for subtraction:
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            sub[row][col]=arr[row][col]-arr1[row][col];
        }
    }
        // to print subtraction o/p
       printf("\n array subtraction \n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",sub[row][col]);
        }
    }
    // for multiplication logic:
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
            for(int k=0;k<c;k++){
                mul[row][col]+=arr[row][k]*arr1[k][col];
            }
        }
    }
    //  printing array multiplication;
    printf("\n Array multiplication\n");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",mul[row][col]);
        }
    } 
}