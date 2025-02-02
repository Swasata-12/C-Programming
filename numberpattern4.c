#include <stdio.h>

/*Write a program to print the below number pattern.
1 2 3 4 5
2 3 4 5         every element start(variable)= 1,2,3,4,5
3 4 5           every element end= 5
4 5
5 */

int main()
{
    int i, j;
    for (i = 1; i <= 5; i = i + 1)
    {
        for (j = i; j <= 5; j = j + 1)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
