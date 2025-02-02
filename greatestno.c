#include <stdio.h>

// Write a program to check the greatest number

int main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is greatest");
    }
    else if (b > a && b > c)
    {
        printf("b is greatest");
    }
    else if (c > a && c > b)
    {
        printf("c is greatest");
    }
    else
    {
        printf("a,b,c are equal");
    }
    return 0;
}
