#include <stdio.h>
int main()
{
    short i, j;

    short x = 10;
    for (i = x / 2; i <= x; i += 2)
    {
        for (j = 1; j < x - i; j += 2)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (j = 1; j <= x - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = x; i >= 1; i--)
    {
        for (j = i; j < x; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
