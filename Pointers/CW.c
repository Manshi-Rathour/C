#include<stdio.h>

int main()
{
    int a = 7;
    int *ptr = &a;
    int *ptr0 = NULL;

    printf("Address of a is %d\n", &a);
    printf("Address of a is %d\n", ptr);
    printf("Address of pointer is %d\n", &ptr);

    printf("Value of a is %d\n", a);
    printf("Value of a is %d\n", *ptr);

    printf("Address is null pointer is %d\n", ptr0);

    return 0;

}