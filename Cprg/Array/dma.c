// dynamic memory allocation  , malloc(),calloc(),realloc(), free();
// malloc program :
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,size,*ptr,sum=0;
    printf("Enter total size :");
    scanf("%d",&size);
    ptr=(int *)malloc(size*sizeof(int));  // 5*4=20 bytes
    if(ptr==NULL){
        printf("Memory not allocated.");
    }    
    else{
        for(i=0;i<size;i++){
            scanf("%d",ptr+i);
            sum+=*(ptr+i);
        }
    }
    printf("Sum=%d",sum);
    free(ptr);  /// deallocating
}

// // calloc program :
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int i,size,*ptr,sum=0;
//     printf("Enter total size :");
//     scanf("%d",&size);
//     ptr=(int *)calloc(size,sizeof(int));  // 5*4=20 bytes
//     if(ptr==NULL){
//         printf("Memory not allocated.");
//     }    
//     else{
//         for(i=0;i<size;i++){
//             scanf("%d",ptr+i);
//             sum+=*(ptr+i);
//         }
//     }
//     printf("Sum=%d",sum);
//     free(ptr);  /// deallocating
// }