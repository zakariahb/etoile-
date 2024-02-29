#include <stdio.h>

void main ()
{
    int i , j;

    i = 1;
    while( i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    i = 4
    while (i >= 1)
    {
        j = 1;
        while(j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
}
