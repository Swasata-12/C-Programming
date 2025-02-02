#include <stdio.h>

/* Write a program to input a number and add all its digits using while loop.*/

int main()
{
    int n, m, s,j;
    s = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    j=n;
    while (n > 0)
    {
        m = n % 10;
        s = s + m;
        n = n / 10;
    }
    printf("The sum of all digits of the number %d is %d", j, s);

    return 0;
}
