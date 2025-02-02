#include <stdio.h>

/*Write a program to create a structure to store complex number.(use arrow operator)*/

struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex number1, *ptr;
    printf("Enter the real part of the number:\n");
    scanf("%d", &number1.real);
    printf("Enter the imaginary part of the number:\n");
    scanf("%d", &number1.img);
    ptr = &number1;
    // printf("Real part=%d\n", (*ptr).real);
    // printf("Imaginary part=%d\n", (*ptr).img);
    printf("Real part=%d\n", ptr->real);
    printf("Imaginary part=%d\n", ptr->img);
    return 0;
}
