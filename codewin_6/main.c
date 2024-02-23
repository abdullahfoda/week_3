#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float rad,dia,cir,area;
    printf("please enter the radius\n");
    scanf("%f",&rad);
    dia= 2*rad;
    cir= 2* M_PI *rad;
    area= M_PI*(rad*rad);

    printf(" diameter = %.2f\n",dia);
    printf(" circumference = %.2f\n",cir);
    printf(" area = %.2f\n",area);
    return 0;
}
