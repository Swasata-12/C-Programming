#include <stdio.h>

/*Write a program to print the below number patter.
1 3 5 7 9
1 3 5 7         every element start= 1
1 3 5           every element end(variable)= 9,7,5,3,1
1 3
1 */

int main()
{
    int i, j;
    for (i = 9; i >= 1; i = i - 2)
    {
        for (j = 1; j <= i; j = j + 2)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
