#include<stdio.h>

int Fact(int x)
{
    if(x==1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * Fact(x-1);
    }
    
}

int main()
{
    int n = 5;
    int fact = Fact(n);
    printf("Factorial is %d\n", fact);

    return 0;
}