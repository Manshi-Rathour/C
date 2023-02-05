#include<stdio.h>

int main()
{
    int a = 24;
    int b = a<<2;   
    int c = a>>2;   
    printf("%d\n", b);   // b = 96
    printf("%d\n", c);   // c = 6

    return 0;
}