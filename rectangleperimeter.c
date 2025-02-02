#include <stdio.h>

/*Write a program to calculate the perimeter of a rectangle.*/

int main()
{
    float l, w, perimeter;
    printf("Enter the length of the rectangle:\n");
    scanf("%f", &l);
    printf("Enter the width of the rectangle:\n");
    scanf("%f", &w);
    perimeter = 2 * (l + w);
    printf("The Perimeter of the Rectangle is %0.2f\n", perimeter);
    return 0;
}
