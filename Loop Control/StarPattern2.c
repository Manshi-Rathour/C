#include<stdio.h>
int main()
{
    short i, j;

    for(i=1; i<=4; i++)
    {
        for(j=i; j<=4; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}