#include <stdio.h>

/*Write a program that displays the results of the following evaluations based on
the number entered by the user:
1.Natural Logarithm of the number
2.Absolute value of the number
3.Square root of the number
4.Cube root of the number
5.Random number between 0 and 1*/

int main()
{
    int a, n;
    printf("Enter a number for the operation:\n");
    scanf("%d", &a);
    printf("Choose option between 1 to 5:\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("log%d=%d", a, log(a));
        break;
    case 2:
        if (a > 0)
        {
            printf("%d", a);
        }
        else if (a < 0)
        {
            printf("-1*%d=%d", a, -1 * a);
        }
        else
        {
            printf("You have entered 0");
        }
        break;

    default:
        printf("You have entered wrong value");
        break;
    }
    return 0;
}
