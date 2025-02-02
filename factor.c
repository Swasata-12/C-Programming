#include <stdio.h>

// Write a programe to find the factors of a given number

int main()
{
    int i, n, m;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("The Factors of the number %d is:\n", n);
    for (i = 1; i <= n / 2; i = i + 1)
    {
        m = n % i; // m= remainder
        if (m == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
