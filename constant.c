#include <stdio.h>
#define PI 3.14 // defined  a comstant
int main()
{
    int a = 4;
    const float b = 5.6; // anothrer way to define a constant
    // PI = 4.5;
    //  b = 1.25;   these are wrong
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %0.2f\n", b);
    printf("The value of PI is: %0.2f\n", PI);

    return 0;
}
