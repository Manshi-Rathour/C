#include<stdio.h>

int main()
{
    short n = 97;
    short m = 0;
    short i;
    for(i=2; i<=n/2; i++)
    {
        if(n % i == 0)
        {
            m = 1;
            break;
        }
    }
    if(m == 0)
    {
        printf("%d is prime", n);
    }
    else
    {
        printf("%d is not prime", n);
    }
    return 0;
}

