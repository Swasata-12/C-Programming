#include <stdio.h>

/*Write a program to find the Factorial of a given number using function.
It is an example of "without argument with return" form.*/

int factorial(void)
{
    int i, s, x;
    s = 1;
    printf("Enter the number for factorial\n");
    scanf("%d", &x);
    for (i = 1; i <= x; i = i + 1)
    {
        s = s * i;
    }
    return s;
}

int main()
{
    int y;
    y = factorial();
    printf("The Factorial of the given number is %d", y);
    return 0;
}
