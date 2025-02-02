#include <stdio.h>

/*Write a program to calculate the area of a square.*/

int main()
{
    float side, area;
    printf("Enter the side of a square\n");
    scanf("%f", &side);
    area = side * side;
    printf("The area of the square is %0.3f\n", area);
    return 0;
}
