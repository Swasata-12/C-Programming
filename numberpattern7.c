#include <stdio.h>

/*Write a program to print the below number pattern.
        1
      1 2       every element start= 1
    1 2 3       every element end(variable)= 1,2,3,4,5
  1 2 3 4
1 2 3 4 5 */

int main()
{
    int i, j, k, s;
    s = 10;
    for (i = 1; i <= 5; i = i + 1)
    {
        for (k = 1; k <= s; k = k + 1)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j = j + 1)
        {
            printf("%d", j);
        }
        s = s - 1;
        printf("\n");
    }

    return 0;
}
