#include <stdio.h>

/*Write aa program to input two numbers and a option. If option is-
1. print sum of two numbers
2. print substraction of two numbers
3. print division of two numbers
4. print multiplication of two numbers*/

int main()
{
    int a, b, n;
    printf("Enter two number for the operation:\n");
    scanf("%d,%d", &a, &b);
    printf("Enter the option between 1 to 4:\n 1.Sum of two no\n 2.Subtraction of two no\n 3.Division of two no\n 4.Multiplication of two no\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("%d+%d=%d", a, b, a + b);
        break;
    case 2:
        printf("%d-%d=%d", a, b, a - b);
        break;
    case 3:
        printf("%d/%d=%d", a, b, a / b);
        break;
    case 4:
        printf("%d*%d=%d", a, b, a * b);
        break;
    default:
        printf("You have entered wrong data.");
        break;
    }
    return 0;
}
