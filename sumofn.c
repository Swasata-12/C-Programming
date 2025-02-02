#include <stdio.h>

// Write a programe to print the sum of 1+2+3+4+....+n

int main()
{
    int i, n, s;
    printf("Enter the Number\n");
    scanf("%d", &n);
    s = 0;
    for (i = 1; i <= n; i = i + 1)
    {
        s = s + i;
    }
    printf("The sum of the numbers from 1 to %d is: %d", n, s);

    return 0;
}
