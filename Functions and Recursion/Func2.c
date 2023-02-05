#include<stdio.h>

int callbyVal(int x, int y)
{
    x++;
    y++;
    int sum = x + y;
    return sum;
}
int callbyRef(int *x, int *y)
{
    (*x)++;
    (*y)++;
    int sum = *x + *y;
    return sum;
}

int main()
{
    int a = 2;
    int b = 5;

    printf("Using call by value sum is :\n ");
    printf("%d\n", callbyVal(a, b));
    printf("Now a = %d and b = %d\n", a, b);
    
    printf("Using call by reference sum is :\n ");
    printf("%d\n", callbyRef(&a, &b));
    printf("Now a = %d and b = %d\n", a, b);

    return 0;

}