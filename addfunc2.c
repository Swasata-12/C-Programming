#include <stdio.h>

/*Write a program to add two numbers using a function.
It is an example of "with argument no return" form.*/

void add(int x, int y)
{
    int z;
    z = x + y;
    printf("The sum of two number is %d", z);
}

int main()
{
    int a, b;
    printf("Enter the numbers for addition\n");
    scanf("%d,%d", &a, &b);
    add(a,b);
    return 0;
}