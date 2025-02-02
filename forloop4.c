#include <stdio.h>

// Write a programe to print 18 16 14 12 10 8

int main()
{
    int i;
    for (i = 18; i >= 8; i = i - 2)
    {
        printf("%d\n", i);
    }

    return 0;
}
