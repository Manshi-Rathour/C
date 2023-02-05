#include<stdio.h>

int main()
{
    short x = 2;
    short y = 5;
    short val = 1;
    short i;

    for(i = 1; i<=y; i++)
    {
        val = val * x;
    }
    printf("Value of x to the power y is %d", val);
    return 0;
}

