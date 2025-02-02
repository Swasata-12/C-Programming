#include <stdio.h>
// Input Fahrenhite temperature and convert it into Celcious
int main()
{
    float f, c;
    printf("Enter the Fahrenhite temperature:\n");
    scanf("%f", &f);
    c = (5 * f - 160) / 9.0;
    printf("The Celcious temperature is %f\n", c);
    return 0;
}
