#include <stdio.h>
#include <math.h>

/*Write a program to calculate the cube of a number.*/

int main()
{
    float n, c;
    printf("Enter a number:\n");
    scanf("%f", &n);
    // c = n * n * n;
    c = pow(n, 3);
    printf("The Cube of the entered number is %0.2f\n", c);
    return 0;
}
