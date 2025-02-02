#include <stdio.h>

/*Write a program to accept a number and check wheather the number is "Twisted Prime"
or not.
*/

int main()
{
    int i, j, n, s, m, c, c1;
    s = 0;
    c = 0;
    c1 = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    j = n;
    while (j > 0)
    {
        m = j % 10;
        s = s * 10 + m;
        j = j / 10;
    }
    for (i = 2; i <= n / 2; i = i + 1)
    {
        if (n % i == 0)
        {
            c = c + 1;
        }
    }
    for (i = 2; i <= s / 2; i = i + 1)
    {
        if (s % i == 0)
        {
            c1 = c1 + 1;
        }
    }
    if (c == 0 && c1 == 0)
    {
        printf("The given number is a Twisted Prime Number");
    }
    else
    {
        printf("The given number is not a Twisted Prime Number");
    }
    return 0;
}
