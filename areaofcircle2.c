#include <stdio.h>

/*Write a program to calculate the area of a circle.You have to take input of the radius from
the user.*/

int main()
{
    float r, area;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &r);
    area = 3.14 * (r * r);
    printf("The Area of the Circle is %0.2f\n", area);
    return 0;
}
