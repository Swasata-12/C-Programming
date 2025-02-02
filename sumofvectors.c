#include <stdio.h>

/*Write a program to create a structure to store vectors. Then make a function to return the sum of
2 vectors.*/

struct vector
{
    int x;
    int y;
};

void sumOfvectors(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is %d\n", sum.x);
    printf("Sum of y is %d\n", sum.y);
}

int main()
{
    struct vector v1, v2, sum;
    printf("Enter the value of x component of v1\n");
    scanf("%d", &v1.x);
    printf("Enter the value of y component of v1\n");
    scanf("%d", &v1.y);
    printf("Enter the value of x component of v2\n");
    scanf("%d", &v2.x);
    printf("Enter the value of y component of v1\n");
    scanf("%d", &v2.y);
    sumOfvectors(v1, v2, sum);
    return 0;
}
