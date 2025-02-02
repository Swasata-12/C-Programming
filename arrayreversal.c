#include <stdio.h>

/*Write a program for array reversal technique.
Given array- int arr[]={1,2,3,4,5,6,67}
We have to print as arr[]={67,6,5,4,3,2,1}*/

void arrayRev(int arr[])
{
    int temp, i;
    for (i = 0; i < 7 / 2; i = i + 1)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("Before reversing the array:\n");
    for (int i = 0; i < 7; i = i + 1)
    {
        printf("The value of %d element is %d\n", i, arr[i]);
    }
    arrayRev(arr);
    printf("\nAfter reversing the array:\n");
    for (int i = 0; i < 7; i = i + 1)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }

    return 0;
}
