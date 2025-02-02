#include <stdio.h>

/* Write a programe to find the factors of a given number and print the summation of the
 factors*/

int main()
{
    int i, n, m, s;
    printf("Enter the number\n");
    scanf("%d", &n);
    s = 0;
    printf("The sum of the factors of the number %d is:\n", n);
    for (i = 1; i <= n / 2; i = i + 1)
    {
        m = n % i;
        if (m == 0)
        {
            s = s + i;
        }
    }
    printf("%d\n", s);

    return 0;
}
