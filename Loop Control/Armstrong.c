#include<stdio.h>

int main()
{
    short arms = 153;
    short digit;
    short sum = 0;
    short check = arms;

    while(check != 0)
    {
        digit = check % 10;
        sum = sum + (digit*digit*digit);
        check = check / 10;
    }
    printf("%d\n", sum);
    if(sum == arms)
    {
        printf("%d is an armstrong no.", arms);
    }
    else
    {
        printf("%d is not an armstrong no.", arms);
    }
    return 0;
}

