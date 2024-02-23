#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cm , meter , km ;

    printf("please enter the length in centimeter\n");

    scanf("%f",&cm);

    meter= cm / 100.0;

    km= cm / 100000.0;

    printf("the length in meter = %.3f m\n",meter);

    printf("the length in kilometer = %.3f km",km);

    return 0;
}
