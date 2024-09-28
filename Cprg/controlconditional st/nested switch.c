// nested switch :
// menu for food.
#include<stdio.h>
int main(){
    int choice,ch1;
    printf("Select food of your choice:");
    printf("\n 1. Pizza");
    printf("\n 2. Cold-drink");
    printf("\n Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: 
        printf("You selected  Pizza.");
        printf("\n Menu for Pizza");
        printf("\n 1. Veg Pizza");
        printf("\n 2. Cheese Pizza");
        printf("\n Enter choice for Pizza");
        scanf("%d",&ch1);
        switch (ch1)
        {
        case 1:
            printf("\n You Selected Veg Pizza");
            break;
        case 2:
            printf("\n You selected Cheese Pizza");
            break;
        default:
            printf("Invalid choice for Pizza");
            break;
        }
        break;
    case 2:
        printf("You selected cold -drink");
        printf("\n Cold- Drink");
        printf("\n 1. Coke");
        printf("\n 2. Fresh juice");
        printf("\n Enter choice for Cold -drink");
        scanf("%d",&ch1);
        switch (ch1)
        {
        case 1:
            printf("\n You Selected Coke");
            break;
        case 2:
            printf("\n You selected Fresh Juice");
            break;
        default:
            printf("Invalid choice for Cold- Drink");
            break;
        }
        break;
    default:
        printf("Invalid choice for food");
        break;
    }
}