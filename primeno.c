#include <stdio.h>

/* Write a programe to check the given number is a prime number or not.
Prime numbers are those which are only divisible by 1 and the number itself.*/

int main()
{
    int i, n, m, c;
    printf("Enter the number\n");
    scanf("%d", &n);
    c = 0;
    for (i = 2; i <= n / 2; i = i + 1)
    {
        m = n % i; // m = remainder
        if (m == 0)
        {
            c = c + 1;
        }
    }
    if (c == 0)
    {
        printf("The number you have entered is a Prime Number");
    }
    else
    {
        printf("The number you have entered is not a Prime Number");
    }

    return 0;
}
