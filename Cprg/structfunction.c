// passing structure in function parameter
#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks[4];
};

int display(struct student s){
    printf("\n Student details:");
    printf("\n Rollno:%d",s.rollno);
    printf("\n Name=%s",s.name);
    for(int i=0;i<4;i++){
      printf("\n Marks:%f",s.marks[i]);
    }
  }
int main(){
   struct student st[2];
   int i,j;
   printf("Enter details of student:\n"); 
   for(i=0;i<2;i++){
        printf("Enter rollno:");
        scanf("%d",&st[i].rollno);
        printf("Enter name:");
        scanf("%s",&st[i].name);
        printf("Enter Marks:");
        for(j=0;j<4;j++){
            scanf("%f",&st[i].marks[j]);
        }
   }
   for(int i=0;i<2;i++){
    display(st[i]);
   }
}