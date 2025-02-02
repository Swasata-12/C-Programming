#include <stdio.h>
// Input Celcious temperature and convert it into Fahrenhite
int main()
{
    float f, c;
    printf("Enter the temperature in Celcious:\n");
    scanf("%f", &c);
    f = (9 * c + 160) / 5.0;
    printf("The temperature in Fahrenhite is %f", f);
    return 0;
}
