#include<stdio.h>

int display(int x)
{
    return x*x;
}

int main()
{
    int a = 10;
    int sq = display(a);
    printf("Square of a = %d is %d", a, sq);

    return 0;
}