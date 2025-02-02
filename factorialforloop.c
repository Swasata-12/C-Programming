#include <stdio.h>

// Write a programe to print the multiplication of 1*2*3*4*....*n (Factorial)

int main()
{
    int i, n, m;
    printf("Enter the number:\n");
    scanf("%d", &n);
    m = 1;
    for (i = 1; i <= n; i = i + 1)
    {
        m = m * i;
    }
    printf("The Factorial of the number %d is: %d", n, m);
    return 0;
}
