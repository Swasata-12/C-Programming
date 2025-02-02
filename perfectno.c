#include <stdio.h>

// Write a programe to check the input number is a Perfect Number or not.
/* Perfect numbers are those in which the sum of all the factors are equal to
that number itself.
Ex- 1 + 2 + 4 + 7 = 28 */

int main()
{
    int i, n, s;
    printf("Enter the number\n");
    scanf("%d", &n);
    s = 0;
    for (i = 1; i <= n / 2; i = i + 1)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }

    if (s == n)
    {
        printf("The number you entered is a Perfect Number");
    }
    else
    {
        printf("The number you entered is not a Perfect Number");
    }

    return 0;
}
