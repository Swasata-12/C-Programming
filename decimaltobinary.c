#include <stdio.h>

int main()
{
    int binary[10], num, m, i, j;
    printf("Enter the decimal number:\n");
    scanf("%d", &num);
    i = 0;
    while (num != 0 || num != 1)
    {
        m = num % 2;
        num = num / 10;
        binary[i] = m;
        i++;
    }
    if (num == 0)
    {
        binary[i] = 0;
        i++;
    }
    if (num == 1)
    {
        binary[i] = 0;
        i++;
        binary[i] = 1;
        i++;
    }
    printf("Equivalent binary number is:");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    return 0;
}
