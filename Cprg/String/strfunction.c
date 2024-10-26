// string function which are in <string.h> header file.
/*1. strlen(): to find length of string.
2. strupr() : to change in upper case.
3. strlwr(): to change string in lower case.
4. strrev(); to reverse a string.
5. strcat(): to concatenate 2 strings;
6. strcpy() :to copy one string to other.
strcpy("destination","original str")
7. strcmp(): to compare the strings;
    o/p =0 : when both the string are same.
    o/p=1: when str1 is greater then str2;
    o/p =-1 when str1 is smaller then str2;
8. strstr(): to check string inside given string.
9. strchr():  to check character inside the given string.
10. strset() : to set the given string with a particular character.
*/
#include<stdio.h>
#include<string.h>
int main(){
    int len;
    char chr[50],str[50],s3[50];
    printf("Enter string:");
    gets(chr);
    //fgets(chr,50,stdin);
    printf("Enter string2:");
    //fgets(str,50,stdin);
    gets(str);
    // printf("\nString chr=%s ",chr);
    // len=strlen(chr);
    // printf("\nLength of string=%d",len);
    // printf("\n string in Upper case=%s",strupr(chr));
    // printf("\n String in lower case=%s",strlwr(chr));
   // printf("\n String reverse=%s",strrev(chr));
   // printf("string concatenate:%s",strcat(chr,str));
//    printf("string copy=%s",strcpy(s3,str));
//    printf("String 3=%s",s3);

  // string compare:
  printf("\n String compare:%d",strcmp(chr,str));

// string inside string.
    printf("\n String inside string=%s",strstr(str,"gram"));
// string character
printf("\n string charcater =%s",strchr(chr,'a'));
// string set .
printf("String set:%s",strset(chr,'d'));
}