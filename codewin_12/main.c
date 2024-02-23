#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num ,res ;

    printf("please enter the number\n");

    scanf("%d",&num);

    res=sqrt(num);

    printf("the square root for the given num %d is %d",num ,res);
    return 0;
}
