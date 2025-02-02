#include <stdio.h>

/*Using switch case statement, write a menu driven program to convert a given temperature
from Fahrenheit to Celcious and vise-versa. For an incorrect choice, an appropriate
message should be displayed.
[Hint: c=5/9*(f-32) and f=1.8*c+32]*/

int main()
{
    int n;
    float c, f;
    printf("Choose an option between 1 and 2\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter the temperature in fahrenhite scale\n");
        scanf("%f", &f);
        c = 5 * (f - 32) / 9.0;
        printf("The temperature in celcious scale is %f", c);
        break;
    case 2:
        printf("Enter the temperature in celcious scale\n");
        scanf("%f", &c);
        f = 1.8 * (c + 32);
        printf("The temperature in fahrenhiite scale is %f", f);
        break;
    default:
        printf("You have entered a wrong value");
        break;
    }
    return 0;
}
