#include <stdio.h>
//Write a program to input two numbers and print the maximum number
int main()
{
    int x, y;
    printf("Enter Two numbers for comparison:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y)
    {
        printf("Maximum number is %d", x);
    }
    else if (y > x)
    {
        printf("Maximum number is %d", y);
    }
    else
    {
        printf("x and y is equal");
    }
    return 0;
}