#include <stdio.h>

/*Write a program to print the below number pattern.
1 2 3 4 5
1 2 3 4         every element start= 1
1 2 3           every element end(variable)= 5,4,3,2,1
1 2
1 */

int main()
{
    int i, j;
    for (i = 5; i >= 1; i = i - 1)
    {
        for (j = 1; j <= i; j = j + 1)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
