#include <stdio.h>

/*Write a program to implement addition of two numbers.
It is an example of "without argument without return" form*/

void add(void)
{
    int a, b, c;
    printf("Enter two numbers for addition:\n");
    scanf("%d,%d", &a, &b);
    c = a + b;
    printf("The sum of two number is %d\n", c);
}

int main()
{
    add();
    return 0;
}
