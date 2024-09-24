// bitwise operator : &,|,^,~,>>,<<
/* A B  A^B
  0 0   0
  1 1   0
  1 0   1
  0 1   1 */
 // negation (~) ~num = -(num+1) ;
 
#include<stdio.h>
int main(){
 int num1,num2;
 printf("Enter number:");
 scanf("%d %d",&num1,&num2);
 printf("\n Bitwise and :%d",num1 & num2);
 printf("\n Bitwise or =%d",num1|num2);
 printf("\n Exclusive or =%d",num1^num2);
 printf("\n negation of num1=%d",~num1);
}
