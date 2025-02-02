#include <stdio.h>

/*Write a program to print the below number pattern.
1 3 5 7 9
3 5 7 9         every element start(variable)= 1,3,5,7,9
5 7 9           every element end= 9
7 9
9 */

int main()
{
    int i, j;
    for (i = 1; i <= 9; i = i + 2)
    {
        for (j = i; j <= 9; j = j + 2)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
