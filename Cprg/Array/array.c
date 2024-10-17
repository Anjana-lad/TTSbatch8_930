// array is a derived datatype.
/*declaring array:
syntax: datatype arrayname[size];
 
 initializing array:
 arrayname[]={values};   // static 
 
*/

// program to print 1d array
#include<stdio.h>
int main(){
    int arr[7]={11,1,5,17,26,35,45};  // integer array.
    for(int i=0;i<7;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}