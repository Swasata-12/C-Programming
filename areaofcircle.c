#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Area of the circle using function pointers in c.
You have to take four points (x1,x2,y1,y2) from the user using scanf().To find the distance
between these points you will use the Euclidean distance formula.
Write a function that will calculate the Euclidean distance which will return an integer value.
Write a function that tells the area of the circle whose radius is equal to the distance
between x1,y1,x2,y2 and pass function pointer as an argument.*/

float Edistance(int x1, int y1, int x2, int y2)
{
    int a;
    a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return sqrt(a);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, x2, y1, y2);
}

int main()
{
    int x1, x2, y1, y2;
    float dst;
    // Take x1,y1 and x2,y2 from the user using scanf
    printf("Enter the value of x1\n");
    scanf("%d", &x1);

    printf("Enter the value of y1\n");
    scanf("%d", &y1);

    printf("Enter the value of x2\n");
    scanf("%d", &x2);

    printf("Enter the value of y2\n");
    scanf("%d", &y2);
    dst = areaOfCircle(x1, x2, y1, y2, Edistance);
    printf("The distance between these points is %0.2f\n", dst);

    return 0;
}
