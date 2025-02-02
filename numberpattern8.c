#include <stdio.h>

/*Write a program to print the below number pattern.
        1
      2 1           every element start(variable)= 1,2,3,4,5
    3 2 1           every element end= 1
  4 3 2 1
5 4 3 2 1 */

int main()
{
  int i, j, k, s;
  s = 10;
  for (i = 1; i <= 5; i = i + 1)
  {
    for (k = 1; k <= s; k = k + 1)
    {
      printf(" ");
    }
    for (j = i; j >= 1; j = j - 1)
    {
      printf("%d", j);
    }
    s = s - 1;
    printf("\n");
  }

  return 0;
}
