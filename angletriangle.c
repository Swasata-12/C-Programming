#include <stdio.h>

// Write a program to input 3 angles of a triangle and print Acute, Obtuse or Right angled triangle

int main()
{
    int a, b, c;
    printf("Enter the 3 angles of the triangle\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a + b + c == 180)
    {
        if (a < 90 && b < 90 && c < 90)
        {
            printf("Acute Triangle");
        }
        else if (a == 90 || b == 90 || c == 90)
        {
            printf("Right Angled Triangle");
        }
        else
        {
            printf("Obtuse Triangle");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}