#include <stdio.h>

/* Write a program to check the input number is a prime number or not using while loop.
Prime numbers are those which are only divisible by 1 and the number itself.*/

int main()
{
    int i, n, m, c;
    c = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    i = 2;
    while (i <= n / 2)
    {
        m = n % i;
        if (m == 0)
        {
            c = c + 1;
        }
        i = i + 1;
    }
    if (c > 0)
    {
        printf("%d is not a Prime Number", n);
    }
    else
    {
        printf("%d is a Prime Number", n);
    }
    return 0;
}
