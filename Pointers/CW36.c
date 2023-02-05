#include<stdio.h>

int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0; //x=0

    printf("x = %d\n" , x);
    printf("*ptr = %d\n" , *ptr);

    *ptr += 5;
    printf("x = %d\n" , x); //x=5
    printf("*ptr = %d\n" , *ptr); //*ptr=5

    (*ptr)++; //*ptr = *ptr + 1
    printf("x = %d\n" , x); //x=6
    printf("*ptr = %d\n" , *ptr); //*ptr = 6

    return 0;
}