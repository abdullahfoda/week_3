#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f ;
    printf("please enter temperature in celsius\n");

    scanf("%f",&c);

   f = (c * 9 / 5)+32 ;

   printf("the temp in fahreneit = %.2f F",f);
    return 0;
}
