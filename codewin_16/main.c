#include <stdio.h>
#include <stdlib.h>

int main()
{ float deg_1,deg_2,deg_3,deg_4,deg_5,total,avg,per ;
    printf("enter mark for subject 1\n");
    scanf("%f",&deg_1);

    printf("enter mark for subject 2\n");
    scanf("%f",&deg_2);

    printf("enter mark for subject 3\n");
    scanf("%f",&deg_3);

    printf("enter mark for subject 4\n");
    scanf("%f",&deg_4);

    printf("enter mark for subject 5\n");
    scanf("%f",&deg_5);

    total=deg_1 + deg_2 + deg_3 + deg_4 + deg_5 ;

    avg=total/5;

    per=(total/500)*100;

    printf("the total = %.2f\n",total);

    printf("the avrage = %.2f\n",avg);

    printf("teh percentage = %.2f\n",per);

    return 0;
}
