#include <stdio.h>

/*Write a C program for matrix multiplication.*/

int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Enter your first matrix\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("Enter the %d,%d element of first matrix\n", i, j);
            scanf("%d", &a[i][j]);
            getchar();
        }
    }

    printf("Enter your second matrix\n");
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            printf("Enter the %d,%d element of second matrix\n", i, j);
            scanf("%d", &b[i][j]);
            getchar();
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            // calculate the result
            for (int k = 1; k <= 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // Print the resultant matrix
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            // Print the result
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
