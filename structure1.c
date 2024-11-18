// structure 
#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float percent;
}st[2];
int main(){
    // struct student st[2];
    int i;
    printf("Enter student details:\n");
    for(i=0;i<2;i++){
        printf("Enter rollno:");
        scanf("%d",&st[i].rollno);
        printf("Enter name:");
        scanf("%s",&st[i].name);
        printf("Enter percent:");
        scanf("%f",&st[i].percent);
    }
    printf("Printing details:\n");
    for(i=0;i<2;i++){
        printf("\n Rollno=%d",st[i].rollno);
        printf("\n Name=%s",st[i].name);
        printf("\n Percentage=%.2f",st[i].percent);
    }
}