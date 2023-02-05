#include<stdio.h>

int main()
{
    short num = 135;
    short count = 0;

    while(num>0)
    {        
        num = num / 10;
        count++;
    }
    printf("No. of digits in num is %d", count);

    return 0;
}

