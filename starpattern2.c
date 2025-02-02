#include <stdio.h>

void starpattern(int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter how many rows you want in your pattern:\n");
    scanf("%d", &rows);
    starpattern(rows);
    return 0;
}
