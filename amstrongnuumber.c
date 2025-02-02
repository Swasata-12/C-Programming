#include <stdio.h>

/* Write a program to input a number and check if the number is an Amstrong
number or not using while loop.
Amstrong Number-> 153 = 1^3 + 5^3 + 3^3*/

int main()
{
    int m, n, s, j;
    s = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    j = n;
    while (n > 0)
    {
        m = n % 10;
        s = s + m * m * m;
        n = n / 10;
    }
    if (s == j)
    {
        printf("The input number is an Amstrong Number");
    }
    else
    {
        printf("The input number is not an Amstrong Number");
    }
    return 0;
}
