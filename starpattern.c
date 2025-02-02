#include <stdio.h>

/*Write a program to print Star Pattern and Reverse Star Pattern.
*     ****
**    ***
***   **
****  *
*/

void starpattern(int rows)
{
    int i, j;
    for (i = 0; i < rows; i = i + 1)
    {
        for (j = 0; j <= i; j = j + 1)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    int i, j;
    for (i = 0; i < rows; i = i + 1)
    {
        for (j = 0; j <= rows - i - 1; j = j + 1)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("Enter 1 for star pattern and 2 for reverse star pattern\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 1:
        starpattern(rows);
        break;
    case 2:
        reversestarpattern(rows);
        break;

    default:
        printf("You have entered an invalid choise");
        break;
    }
    return 0;
}
