#include <stdio.h>

/* Write a program to find the factors of a given number using while loop.*/

int main()
{
    int i, n, m;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("The factors of the number %d are:\n", n);
    i = 1;
    while (i <= n / 2)
    {
        m = n % i;
        if (m == 0)
        {
            printf("%d\n", i);
        }
        i = i + 1;
    }

    return 0;
}
