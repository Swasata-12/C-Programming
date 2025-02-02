#include <stdio.h>

// Write a program to check the triangle type by the input sides

int main()
{
    float a, b, c;
    printf("Enter the three sides of the triangle\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c && c == a)
        {
            printf("Equilateral Triangle");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isoselis Triangle");
        }
        else
        {
            printf("Scalane Triangle");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }

    return 0;
}
