//switch case to print weather a given character is vowel or consonant
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
    case 'a':
        printf("A is a vowel");
        break;
    case 'E':
    case 'e':
        printf("E is a vowel");
        break;
    case 'I':
    case 'i':
        printf("I is a vowel");
        break;
    case 'O':
    case 'o':
        printf("O is a vowel");
        break;
    case 'U':
    case 'u':
        printf("U is a vowel");
        break;
    default:
        printf("It is a consonant.");
        break;
    }
}