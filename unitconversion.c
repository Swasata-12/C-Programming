#include <stdio.h>

/*Units and Conversion
1. kilometers to miles
2. inches to foot
3. cms to inches
4. pound to kgs
5. inches to meters
*/

int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character. q to quit\n  1. kilometers to miles\n  2. inches to foot\n  3. cms to inches\n  4. pound to kgs\n  5. inches to meters\n");
        scanf(" %c", &input);
        switch (input)
        {
        case 'q':
            printf("Quitting the Program....");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%0.2f Kms is equal to %0.2f Miles\n\n\n", first, second);
            break;

        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%0.2f Inches is equal to %0.2f Foot\n\n\n", first, second);
            break;

        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%0.2f Cms is equal to %0.2f Inches\n\n\n", first, second);
            break;

        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%0.2f Pounds is equal to %0.2f Kgs\n\n\n", first, second);
            break;

        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%0.2f Inches is equal to %0.2f Meters\n\n\n", first, second);
            break;

        default:
            printf("In default now\n\n");
            break;
        }
    }

end:
    return 0;
}
