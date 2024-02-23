#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,y ,res;
    printf("please enter the base\n");
    scanf("%d",&x);
    printf("please enter the exponent\n");
    scanf("%d",&y);

    res= pow(x,y);
    printf("the result = %d",res);
    return 0;
}
