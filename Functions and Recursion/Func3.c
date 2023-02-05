#include<stdio.h>

int Recurs_sum(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x + Recurs_sum(x-1);
    }
    
}

int main()
{
    int n = 10;
    int sum = Recurs_sum(n);
    printf("sum is %d\n", sum);

    return 0;
}