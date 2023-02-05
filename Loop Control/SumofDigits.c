#include<stdio.h>

int main()
{
    short num = 135;
    short digit;
    short sum = 0;
    while(num>0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("Sum of the digits of num is %d", sum);
    return 0;
}