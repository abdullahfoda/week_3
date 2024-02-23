#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum,diff,mul,div,mod;
    printf("enter first num\n");
    scanf("%d",&x);
    printf("enter second num\n");
    scanf("%d",&y);

    sum=x+y;
    diff=x-y;
    mul=x*y;
    div=x/y;
    mod=x%y;

    printf("sum= %d\n",sum);
    printf("differnce= %d\n",diff);
    printf("product= %d\n",mul);
    printf("division= %d\n",div);
    printf("modulus= %d\n",mod);

    return 0;
}
