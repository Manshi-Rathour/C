#include<stdio.h>

int sum(int a, int b);

int main()
{
    int a;
    printf("Enter first number :");
    scanf("%d", &a);
    int b;
    printf("Enter second number :");
    scanf("%d", &b);

    printf("sum is :%d" , sum(a,b));
    return 0;
}

int sum(int a, int b) {
    return a + b;
}