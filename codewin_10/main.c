#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days ,year ,week ,day ;

    printf("please enter dayes \n");

    scanf("%d",&days);



    printf("%d days = \n",days);

    year =days /365 ;

    week=(days-(year*365))/7 ;

    day= week%7;

    printf("%d year/s and \n",year);
    printf("%d week/s and \n",week);
    printf("%d day/s \n",day);

    return 0;
}
