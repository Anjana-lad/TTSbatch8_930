// structure program
#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float percent;
}; 
int main(){
    int i;
  struct student s1[2]; // method to define variable for structure
    printf("Enter student details:");
    for(i=0;i<2;i++){
       printf("Enter rollno:");
        scanf("%d",&s1[i].rollno);
        printf("Enter name:");
        scanf("%s",&s1[i].name);
        printf("Enter percent:");
        scanf("%f",&s1[i].percent);
    }
    for(i=0;i<2;i++){
        printf("\n Student =%d",i);
        printf("\n Rollno=%d",s1[i].rollno);
        printf("\n Name=%s",s1[i].name);
        printf("\n Percent=%.2f",s1[i].percent);
    }
}