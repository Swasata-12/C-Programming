#include <stdio.h>

/*Write a program to find the Factorial of a given number using function.
It is an example of "with argument no return" form.*/

void factorial(int x)
{
    int i, s;
    s = 1;
    for (i = 1; i <= x; i = i + 1)
    {
        s = s * i;
    }
    printf("The Factorial of the given number is %d", s);
}

int main()
{
    int x, y;
    printf("Enter the number for factorial\n");
    scanf("%d", &x);
    factorial(x);
    return 0;
}
