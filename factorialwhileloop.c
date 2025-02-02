#include <stdio.h>

/* Write a program to find the factorial of a given number using while loop.*/

int main()
{
    int i, n, m;
    printf("Enter the number\n");
    scanf("%d", &n);
    m = 1;
    i = 1;
    while (i <= n)
    {
        m = m * i;
        i = i + 1;
    }
    printf("The Factorial of the number %d is %d", n, m);
    return 0;
}
