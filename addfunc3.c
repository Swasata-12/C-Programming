#include <stdio.h>

/*Write a program to add two numbers using a function.
It is an example of "without argument with return" form.*/

int add(void)
{
    int x, y, z;
    printf("Enter two numbers for addition\n");
    scanf("%d,%d", &x, &y);
    z = x + y;
    return z;
}

int main()
{
    int c;
    c = add();
    printf("The sum of two number is %d\n", c);
}