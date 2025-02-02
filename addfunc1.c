#include <stdio.h>

/*Write a program to add two numbers using a function.
It is an example of "with argument with return" form.*/

int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int main()
{
    int a, b, c;
    printf("Enter two numbers for addition\n");
    scanf("%d,%d", &a, &b);
    c = add(a, b);
    printf("The sum of two number is %d", c);
    return 0;
}
