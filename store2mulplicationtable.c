#include <stdio.h>

/*Write a program to create a 2D array, storing the table of 2 and 3.*/

int main()
{
    int table[2][10], m, n;
    printf("Enter the first number whose multiplication table you want:\n");
    scanf("%d", &m);
    printf("Enter the second number whose multiplication table you want:\n");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        table[0][i] = m * (i + 1);
        printf("%dX%d=%d\n", m, (i + 1), table[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        table[1][i] = n * (i + 1);
        printf("%dX%d=%d\n", n, (i + 1), table[1][i]);
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%dX%d=%d\n", m, (i + 1), table[0][i]);
    // }
    // printf("\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%dX%d=%d\n", n, (i + 1), table[1][i]);
    // }

    return 0;
}
