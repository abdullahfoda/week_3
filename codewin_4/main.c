#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len ,wid,per ;
    printf("enter length\n");
    scanf("%d",&len);
    printf("enter width\n");
    scanf("%d",&wid);

    per=(len+wid)*2 ;
    printf("the perimeter is %d",per);

    return 0;
}
