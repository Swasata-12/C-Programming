#include <stdio.h>

int main()
{
    float profit[10], weight[10], ratio[10], totalvalue, temp, capacity;
    int n, i, j;
    printf("Enter the number of element:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the Weight and Profit of item %d\n", i + 1);
        scanf("%f %f", &weight[i], &profit[i]);
    }
    printf("Enter the Capacity of Knapsack:\n");
    scanf("%f", &capacity);
    for (i = 0; i < n; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (weight[i] > capacity)
        {
            break;
        }
        else
        {
            totalvalue = totalvalue + profit[i];
            capacity = capacity - weight[i];
        }
    }
    if (i < n)
    {
        totalvalue = totalvalue + (ratio[i] * capacity);
    }
    printf("\nThe Maximum Value is: %f\n", totalvalue);

    return 0;
}
