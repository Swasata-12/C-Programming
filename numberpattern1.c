#include <stdio.h>

/*Write a program to print the bellow number pattern.
1
1 2          every element start= 1
1 2 3        every element end(variable)= 1,2,3,4,5
1 2 3 4
1 2 3 4 5 */

int main()
{
    int i, j;
    for (i = 1; i <= 5; i = i + 1)
    {
        for (j = 1; j <= i; j = j + 1)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }

    return 0;
}
