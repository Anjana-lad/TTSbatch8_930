// multi -dimension array
// syntax: return type array_name [table][row][col];

#include <stdio.h>
int main(){
    int arr[3][3][3] = {
        {{1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}},
        {{11, 12, 13},
         {14, 15, 16},
         {17, 18, 19}},
        {{22, 23, 33},
         {44, 55, 66},
         {77, 88, 99}}};
    int row, col, table;
    printf("printing array:-\n");
    for (table = 0; table < 3; table++)
    {
        printf("\n");
        for (row = 0; row < 3; row++)
        {
            printf("\n");
            for (col = 0; col < 3; col++)
            {
                printf("%d ", arr[table][row][col]);
            }
        }
    }
}