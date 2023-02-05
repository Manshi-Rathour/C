#include<stdio.h>

int main()
{
    short num = 135;
    short digit;
    short revNum = 0;
    short i = 100;
    short orgNum = num;

    while(num>0)
    {   
        digit = num % 10;
        revNum = revNum + digit * i;     
        num = num / 10;
        i = i/10;
    }
    printf("The reverse of num is %d\n", revNum);

    if(orgNum == revNum)
    {
        printf("Pallindrom\n");
    }
    else
    {
        printf("Not Pallindrom\n");
    }

    return 0;
}

