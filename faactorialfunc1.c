#include <stdio.h>

/*Write a program to find the Factorial of a given number using function.
It is an example of "with argument with return" form.*/

int factorial(int x)
{
    int i, s;
    s = 1;
    for (i = 1; i <= x; i = i + 1)
    {
        s = s * i;
    }
    return s;
}

int main()
{
    int x, y;
    printf("Enter the number for factorial\n");
    scanf("%d", &x);
    y = factorial(x);
    printf("The Factorial of the given number is %d", y);
    return 0;
}
