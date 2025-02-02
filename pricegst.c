#include <stdio.h>

/*Write a program to enter price of 3 items and print their final cost with 18% gst.*/

int main()
{
    float price[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the price of %d item:\n", i + 1);
        scanf("%f", &price[i]);
    }

    for (i = 0; i < 3; i++)
    {
        price[i] = price[i] + (0.18 * price[i]);
        printf("After adding gst the price of the %d item is %0.2f\n", i + 1, price[i]);
    }

    // for (i = 0; i < 3; i++)
    // {
    //     printf("After adding gst the price of the %d item is %0.2f\n", i + 1, price[i]);
    // }

    // printf("%p\n", &price[0]);
    // printf("%p\n", &price[1]);
    // printf("%p\n", &price[2]);

    return 0;
}
