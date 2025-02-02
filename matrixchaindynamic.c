#include <stdio.h>
#include <conio.h>
int s[10][10];
void matrix_chain(int p[], int n)
{
    int i, j, k, d, q;
    int m[10][10];
    for (i = 1; i <= n; i++)
    {
        m[i][i] = 0;
    }
    for (d = 2; d <= n; d++)
    {
        for (i = 1; i <= n - d + 1; i++)
        {
            j = i + d - 1;
            m[i][j] = 999;
            for (k = 1; k <= j - 1; k++)
            {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
    printf("%d", m[1][n]);
}

void optimal_p(int i, int j)
{
    if (i == j)
    {
        printf("A%d", i);
    }
    else
    {
        printf("(");
        optimal_p(i, s[i][j]);
        optimal_p(s[i][j] + 1, j);
        printf(")");
    }
}
int main()
{
    int p[10], n;
    printf("Enter the number of matrixes:");
    scanf("%d", &n);
    printf("Enter the dimentions of the matrixes:\n");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }
    matrix_chain(p, n);
    optimal_p(1, n);

    return 0;
}