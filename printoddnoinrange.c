#include <stdio.h>

/*Print all the odd numbers between 5 to 50.*/

int main()
{
    int i;
    for (i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
