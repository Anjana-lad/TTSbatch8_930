// string  is a group of characters.
#include<stdio.h>
int main(){
    char str[20];
    printf("Enter string:");
    //scanf("%[^\n]s",&str);
    //gets(str);
    fgets(str,20,stdin);
    printf("String=%s",str);
}