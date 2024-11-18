// nested structure 
#include<stdio.h>
struct employee{
    int empid;
    char name[20];
    struct department{
        int deptid;
        char dep_name[20];
    } dept;  // variable for inner structure
} ;

int main(){
    struct employee emp[2];

    printf("Enter details:\n");
    for(int i=0;i<2;i++){
        printf("Enter emp_id:");
        scanf("%d",&emp[i].empid);
        printf("Enter name:");
        scanf("%s",&emp[i].name);
        printf("Enter department id:");
        scanf("%d",&emp[i].dept.deptid);
        printf("Enter department name:");
        scanf("%s",&emp[i].dept.dep_name);
    }   
    for(int i=0;i<2;i++){
        printf("\n Employee id=%d",emp[i].empid);
        printf("\n Name=%s",emp[i].name);
        printf("\n Dept id=%d",emp[i].dept.deptid);
        printf("\n Dept name=%s",emp[i].dept.dep_name);
    }
}