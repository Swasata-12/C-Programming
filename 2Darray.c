#include <stdio.h>

/*Write a program to take marks of 3 subjects of 2 stdents using a 2D array and print it.
 */

int main()
{
    int marks[2][3], i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the marks of %d student of %d subject\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("The marks of %d student of %d subject is %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}
